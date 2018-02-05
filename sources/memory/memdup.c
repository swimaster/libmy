/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** memdup.c
*/

#include "memory.h"

void *mem_dup(const void *src, size_t size)
{
	void *mem = my_calloc(size, 1);

	if (mem != NULL)
		mem_cpy(mem, src, size);
	return (mem);
}