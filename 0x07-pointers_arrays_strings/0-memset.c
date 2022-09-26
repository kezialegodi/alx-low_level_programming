#include "main.h"
/**
 * _memset - fills memory block with a constant byte
 * @s: address to memory block
 * @b: char to be used
 * @n: number of bytes to be used
 * Return: pointer to the memory the block
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
	for (a = 0; a < n; a++)
		s[a] = b;
	
	return (s);
}
