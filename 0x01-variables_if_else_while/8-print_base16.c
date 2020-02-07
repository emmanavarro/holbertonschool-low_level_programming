#include <stdio.h>
/**
*main - display alphabet in reverse and lowercase
*Return: 0
*/
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
