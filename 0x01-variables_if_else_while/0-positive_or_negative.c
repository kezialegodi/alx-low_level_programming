#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if the number postive, zero, or negetive
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negetive
 * Return: 0 
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
{
	printf("%i is zero\n" , n);
}

else if (n < 0)
{
	printf("%i is negetive\n" , n);
}

else
{
	printf("%i is postive\n" , n);
}

return (0);
}
