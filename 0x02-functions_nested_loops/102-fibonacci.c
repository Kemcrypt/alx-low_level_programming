#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0.
*/

int main(void)
{

	long int i, j, k, l;

	j = 1;
	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%1d,", j);
		}
		else
		{
			printf("%1d\n", j);

		}
		l = j + k;
		j = k;
		k = 1;
	}

	return (0);
}



