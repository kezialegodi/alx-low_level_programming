#include "main.h"
/**
 * string_toupper - changes all lowercase letter of a string to uppercase
 * @str: string to be changed
 * Returns: address to the string
 */
char *string_toupper(char *)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
