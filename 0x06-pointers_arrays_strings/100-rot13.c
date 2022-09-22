#include "main.h"
#include <stdio.h>
/**
 * rot13 - rot13 encoder 
 * @str: string to be encoded
 * Return: address of the encoded string
 */
char *rot13(char *str)
{
	int i = 0;
	while (str[i])
	{
		str[i] = transform_2(str[i]);
		i++;
	}
	return(str);
}
