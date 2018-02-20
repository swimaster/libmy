/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** numeric.h
*/

#pragma once

////////////////////////////////////////////////////////////////////////////////

#include <stdlib.h>

#include "char.h"
#include "math.h"
#include "memory.h"
#include "string.h"

////////////////////////////////////////////////////////////////////////////////

size_t intlen(ssize_t n);
size_t uintlen(size_t n);

ssize_t my_atoi(const char *str);
size_t my_atou(const char *str);
double my_atof(const char *str);
char *my_itoa(ssize_t n, uint8_t base);
char *my_utoa(size_t n, uint8_t base);
char *my_ftoa(double d, int prec);

long int str_tol(const char *nptr, char **endptr, int base);
long long int str_toll(const char *nptr, char **endptr, int base);
unsigned long int str_toul(const char *nptr, char **endptr, int base);
unsigned long long int str_toull(const char *nptr, char **endptr, int base);