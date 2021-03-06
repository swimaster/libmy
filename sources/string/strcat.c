/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** strcat.c
*/

#include "my/string.h"

char *my_strcat(char *dest, const char *src)
{
	char *d = dest;
	const char *s = src;

	for (; *d != '\0'; d++);
	while (*s != '\0')
		*d++ = *s++;
	*d = '\0';
	return (dest);
}

char *my_strncat(char *dest, const char *src, size_t n)
{
	char *d = dest;
	const char *s = src;

	if (!n)
		return (dest);
	for (; *d != '\0'; d++);
	while (*s != '\0' && n--)
		*d++ = *s++;
	*d = '\0';
	return (dest);
}