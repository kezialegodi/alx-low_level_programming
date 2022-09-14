#include "main.h"
/**
 * _salpha - function to check if c is a letter, lowercase or uppercase
 * @c: is the int that will use for the arguement of the function
 * Return 0
 */
int _salpha(int c)
{
if((c >= 'a' && c <= 'z' || c >= 'A' && c<= 'Z'))
{
	return (1);
}
else
return (0);
}
