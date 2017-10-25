/*
** strcpy.c for libmy in /mnt/data/Delivery/Perso/libmy/string
**
** Made by Benoit Lormeau
** Login   <benoit.lormeau@epitech.eu>
**
** Started on  Mon Oct 23 10:50:38 2017 Benoit Lormeau
** Last update Mon Oct 23 10:50:38 2017 Benoit Lormeau
*/

#include "libmy.h"

char *str_cpy(char *dest, const char *src)
{
	return (str_ncpy(dest, src, str_len(src)));
}

char *str_ncpy(char *dest, const char *src, size_t n)
{
	char *s = dest;

	while (n > 0 && *src != '\0'){
		*s++ = *src++;
		--n;
	}
	while (n > 0){
		*s++ = '\0';
		--n;
	}
	return (dest);
}