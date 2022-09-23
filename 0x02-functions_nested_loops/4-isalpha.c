#include "main.h"
/**
 * _salpha - checks for alphabetical letters
 * @c: a charter to be checke on
 * Return: return 0 or 1 depending on condition
 */
int _salpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return(0);
}
