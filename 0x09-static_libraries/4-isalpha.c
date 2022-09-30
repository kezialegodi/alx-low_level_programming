#include "main.h"
/**
 * _isalpha - checks for alphabetical letters
 * @c: input letter
 * Return: Always success
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
