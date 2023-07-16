#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - A program that print last digit
 *   Return: 0 (Success)
 */
int main(void)
{
	int n;
	int lastdigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
if (lastdigit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
else if (lastdigit == 0)
printf("Last digit of %d is %d and is \zero\n", n, lastdigit);
else if (lastdigit < 6)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
return (0);
}
