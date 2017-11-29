/*
** Numeric.h for libmy in /mnt/data/Delivery/Perso/libmy/Includes
**
** Made by Benoit Lormeau
** Login   <benoit.lormeau@epitech.eu>
**
** Started on  Thu Nov 9 14:06:55 2017 Benoit Lormeau
** Last update Mon Nov 13 10:44:46 2017 Benoit Lormeau
*/

#ifndef LIBMY_NUMERIC_H
# define LIBMY_NUMERIC_H

#include <stdlib.h>

#include "Char.h"
#include "Memory.h"
#include "String.h"

size_t	 intlen(ssize_t n);
size_t	 uintlen(size_t n);

ssize_t	 my_atoi(const char *str);
size_t	 my_atou(const char *str);
char	*my_itoa(ssize_t n, uint8_t base);
char	*my_utoa(size_t n, uint8_t base);
char	*my_dtoa(double d, int prec);

#endif // LIBMY_NUMERIC_H