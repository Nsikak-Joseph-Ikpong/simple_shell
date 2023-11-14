#include "shell.h"

/**
 **_memset - fills memory with a constant byte, Populates memory with a consistent byte.
 *@s: the pointer to the memory area, the pointer to the region in memory
 *@b: the byte to fill *s with, Fill the *s with bytes.
 *@n: the amount of bytes to be filled, the quantity of bytes that need to be completed
 *Return: (s) a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - frees a string of strings, deallocates a sting of strings
 * @pp: string of strings
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - reallocates a block of memory, Resizes a memory block.
 * @ptr: pointer to previous malloc'ated block, pointer to the previously allocated memory block.
 * @old_size: byte size of previous block, Size of the block preceding the current one in terms of bytes.
 * @new_size: byte size of new block, Size of the recently created block in terms of bytes.
 *
 * Return: pointer to da ol'block nameen.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)/*Prototype*/
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);/*Return Statement*/
}
