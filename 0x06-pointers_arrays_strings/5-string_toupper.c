#include "main.h"
/**
 * string_toupper - changes all lowercase letters uppercase
 * @str: string to be changed
 * Return: address to the string
 */
char *string_toupper(char *)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
