#include <stdarg.h>
/**
 * sum_them_all - returns the sum all its parameter
 * @n: amount of arguements to be summed
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	unsigned int sum = 0, i;
	if (n == 0)
		return (0);
	va_start(arglist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arglist, int);
	}
	va_end(arglist);
	return (sum);
}
