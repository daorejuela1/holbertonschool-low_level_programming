#include <stdlib.h>
unsigned int get_len(char *s);
/**
 *string_nconcat - cat strings till n len in s2
 *@s1: string 1
 *@s2: string 2
 *Return: concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, i, p;
	char *result;

	s1_len = get_len(s1);
	s2_len = get_len(s2);
	if (n > s2_len)
		n = s2_len;
	result = malloc(s1_len + n + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		result[i] = s1[i];
	for (p = 0; p < n; p++)
		result[i + p] = s2[p];
	result[i + p] = 0;
	return (result);
}

/**
 *get_len - get stringth lenght
 *@s: array
 *Return: len of string
 */
unsigned int get_len(char *s)
{
	unsigned int i = 0;
	while (s[i])
		i++;
	return i;
}
