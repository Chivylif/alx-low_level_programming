#include "main.h"

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;

	len1 = len2 = i = j = 0;
	char * newstr;
	
	if ((s1 = NULL) || (s2 = NULL))
	{
		s1 = s2 = "";
	}
	
	while (*s1)
	{
		len1++;
		s1++;
	}
	while (*s2)
	{
		len2++;
		s2++;
	}
	newstr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (newstr == NULL)
	{
		return (NULL);
	}
	while (*s1)
	{
		newstr[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		newstr[i] = s2[j];
		j++;
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
