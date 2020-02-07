#include <stdio.h>
/**
*main - display alphabet in reverse and lowercase
*Return: 0
*/
int main(void)
{
	int ch;

	ch = 48;

	while (ch <= 57)
	{
		putchar(ch);
		if (ch < 57)
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
