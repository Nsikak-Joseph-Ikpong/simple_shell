#include "shell.h"

/**
 **_strncpy - copies a string, Duplicates a string.
 *@dest: the destination string to be copied to, The target string for copying.
 *@src: the source string
 *@n: the amount of characters to be copied, The number of characters to be replicated.
 *Return: the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **_strncat - concatenates two strings, joins two strings
 *@dest: the first string, initial string
 *@src: the second string
 *@n: the amount of bytes to be maximally used, The maximum number of bytes to be utilized.
 *Return: the concatenated string, the joint string
 */
char *_strncat(char *dest, char *src, int n)/*Prototype*/
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 **_strchr - locates a character in a string, Finds a character within a string.
 *@s: the string to be parsed, The string to be analyzed.
 *@c: the character to look for, The character to search for.
 *Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)/*Prototype*/
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);/*Return Statement*/
}
