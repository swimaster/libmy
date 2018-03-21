/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** str_toupper.c
*/

#include "my/string.h"

char *str_toupper(char *str)
{
	if (!str)
		return (str);
	for (char *s = str; *s; ++s)
		*s = to_upper(*s);
	return (str);
}