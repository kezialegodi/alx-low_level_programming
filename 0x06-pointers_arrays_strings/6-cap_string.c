#include "main.h"
/**
 * cap_string -  function that capitalizes first character of the word
 * @str: string to capitalize
 * Returns: returns the capitalized string
 */
char *cap_string(char *)
{
	int index 0;
	while (str[++index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		if (str[index - 1] = ' ' ||
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
