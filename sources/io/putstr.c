/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** putstr.c
*/

#include "my/io.h"

void my_putstr(const char *str)
{
	write(1, str, my_strlen(str));
}