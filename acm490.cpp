#include <stdio.h>
#include <string.h>

int main ()
{
	char a [105] [105];
	int total = 0;
	int i, j;

	for (i = 0; i < 105; i++)
	{
		for (j = 0; j < 105; j++)
			a [i] [j] = ' ';
	}

	while (gets (a [total]))
		total++;

	int max = 0;
	int length;
	for (i = 0; i < total; i++)
	{
		length = strlen (a [i]);
		if (length > max)
			max = length;
		a [i] [length] = ' ';
	}
	char c ;
	for (i = 0; i < max; i++)
	{
		for (j = total - 1; j >= 0; j--)
		{
			printf("%c", a [j] [i]);
		}
		printf("\n");
	}

	return 0;
}
