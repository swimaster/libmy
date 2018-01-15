/*
** is_space.c for libmy in /mnt/data/Delivery/Perso/libmy/Sources/Char
**
** Made by Benoit Lormeau
** Login   <benoit.lormeau@epitech.eu>
**
** Started on  Tue Oct 24 15:07:33 2017 Benoit Lormeau
** Last update Tue Oct 24 15:07:33 2017 Benoit Lormeau
*/

#include "char.h"

bool is_space(int c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}