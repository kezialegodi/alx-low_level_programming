#include <stdio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Seccess/correct)
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
