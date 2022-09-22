#include "main.h"
/**
 * leet - function that encode a string
 * @str: string that will be encoded
 * Return: returns encoded string
 */
char *leet(char *str)
{
	int a = 0, b, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3','0', '7', '1'};
	while (str[a])
	{
		b = 0;
		while (b < l)
		{
			if (str[a] == tr[b] || str[a] - 32 == tr[b])
			 str[a] = trw[b];
			b++;
		}
		a++;
	}
		return (str);
}			
