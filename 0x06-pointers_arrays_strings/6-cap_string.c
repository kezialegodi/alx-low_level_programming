#include "main.h"
/**
 * cap_string -  function that capitalize the first character of a word
 * @str: string to capitalize
 * Return: returns the capitalized string
 */
char *cap_string(char *str)
{
	int i = 0;
	while (str[i])
	{
		while (!(str[i] >= 97 && str[i] <= 122))
			i++;
		if (str[i - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ',' ||
				str[index - 1] == ';' ||
				str[index - 1] == '.' ||
				str[index - 1] == '!' ||
				str[index - 1] == '?' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}')
	}	str[index] -= 32;
		return (str);
}
