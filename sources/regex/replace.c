/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** replace.c
*/

#include "my/regex.h"

char *regex_replace(const char *pattern, const char *replacement, char *subject)
{
	regex_t	regex;
	regmatch_t match;
	char *result = my_calloc(my_strlen(subject) + 1, sizeof(char));

	if (!result)
		return (NULL);
	if (!regex_create(&regex, pattern)) {
		my_free(result);
		return (NULL);
	}
	while (regexec(&regex, subject, 1, &match, 0) != REG_NOMATCH) {
		result = my_strnapd(result, subject, match.rm_so);
		result = my_strapd(result, replacement);
		subject += match.rm_eo;
	}
	result = my_strapd(result, subject);
	regfree(&regex);
	return (result);
}