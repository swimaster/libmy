/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** sprintf.c
*/

#include "io.h"
#include "printf.h"

int my_sprintf(char *buff, const char *format, ...)
{
	size_t max = my_malloc_size(buff);
	va_list ap;
	int n;

	va_start(ap, format);
	n = my_vsnprintf(buff, max, format, ap);
	va_end(ap);
	return (n);
}

int my_vsprintf(char *buff, const char *format, va_list ap)
{
	size_t max = my_malloc_size(buff);

	return (my_vsnprintf(buff, max, format, ap));
}

int my_snprintf(char *buff, size_t max, const char *format, ...)
{
	va_list ap;
	int n;

	va_start(ap, format);
	n = my_vsnprintf(buff, max, format, ap);
	va_end(ap);
	return (n);
}

int my_vsnprintf(char *buff, size_t max, const char *format, va_list ap)
{
	char *buffer = my_calloc(512, sizeof(char));
	size_t chars;

	if (buffer == NULL)
		return (-1);
	for (; *format; ++format) {
		if (!(*format == '%' && str_chr(PRTF_CHARS, *(format + 1))))
			buffer = str_napd(buffer, format, 1);
		else if (!printf_process(&format, &buffer, ap)) {
			my_free(buffer);
			return (-1);
		}
	}
	chars = str_len(buffer);
	if (buff != NULL)
		str_ncpy(buff, buffer, max < chars ? max : chars);
	my_free(buffer);
	return ((int)chars);
}
