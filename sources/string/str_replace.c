/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** str_replace.c
*/

#include "my/string.h"

char *str_replace(char *subject, const char *search, const char *replace)
{
	char *output = NULL;
	ssize_t pos = 0;

	if (str_empty(search) || replace == NULL || str_empty(subject))
		return (NULL);
	output = my_calloc(1, sizeof(char));
	pos = str_pos(subject, search);
	if (pos == -1)
		return (subject);
	for (; pos != -1; pos = str_pos(subject, search)) {
		output = str_napd(output, subject, pos);
		output = str_apd(output, replace);
		subject += pos + str_len(search);
	}
	output = str_apd(output, subject);
	return (output);
}