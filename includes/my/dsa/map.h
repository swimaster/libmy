/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** map.h
*/

#pragma once

////////////////////////////////////////////////////////////////////////////////

#include <stdbool.h>
#include <stdlib.h>

#include "my/dsa/dsa_types.h"
#include "my/dsa/list.h"
#include "my/memory.h"
#include "my/string.h"

////////////////////////////////////////////////////////////////////////////////

#define MAP_INSERT(map, key, var)	(map_insert(map, key, &(var)))
#define MAP_AT(map, key, TYPE)		(*((TYPE *)map_at(map, key)))

////////////////////////////////////////////////////////////////////////////////

typedef struct map_node
{
	char *key;
	void *data;
	struct map_node *next;
} map_node_t;

typedef struct map
{
	map_node_t *head;
	clean_func_t *clean_up;
} map_t;

////////////////////////////////////////////////////////////////////////////////

map_t *map_create(clean_func_t *clean_up);
void map_destroy(map_t *map);

bool map_is_empty(map_t *map);
size_t map_get_size(map_t *map);

bool map_has_key(map_t *map, const char *key);
void *map_at(map_t *map, const char *key);
char **map_get_keys(map_t *map);

bool map_insert(map_t *map, const char *key, void *data);
void map_remove(map_t *map, const char *key);
void map_clear(map_t *map);

void map_foreach(map_t *map, void (*callback)(const char *key, void *data));