#include <stdio.h>

/**
 * main - print all posible different combination of three digits
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; i < 58; i++)
			{
				if (i > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(i);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

