#include <stdio.h>
/**
 *  main - A program that print charactere
 *   Return: 0 (Success)
*/
int main(void)
{
	char c;

for (c = 'a'; c <= 'z'; c++)
{
	if (c != 'e')
	{
	if (c != 'q')
	putchar(c);
	}
}
putchar('\n');
return (0);
}
