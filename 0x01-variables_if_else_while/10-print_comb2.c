#include <stdio.h>
/**
*main - display numbers from 00 to 99
*Return: 0
*/
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; ++i)
	{
		for (j = 48; j <= 57; ++j)
		{
			putchar(i);
			putchar(j);
			if (i < 57 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
