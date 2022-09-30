#include "main.h"
/**
 * _strpbrk - prints the consecutive characters of s1 that are in s2
 * @s: source string
 * @accept: searching string
 * Return: new string
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;
	while (s[a])
	{
		b = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}
		a++;
	}
	return ('\0');
}
