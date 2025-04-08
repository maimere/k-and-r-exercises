#include <stdio.h>

/* exercise 1-9 */
/* Write a program to copy its input to its output, */
/* replacing each string of one or more blanks by a single blank */

int main()
{
	int c, lastblank;

	lastblank = 0;
	while ((c = getchar()) != EOF)
	{
		if (c != ' ')
		{
			lastblank = 0;
			printf("%c", c);
		}
		if (c == ' ')
			if (lastblank == 0)
			{
				printf(" ");
				++lastblank;
			}
	}
	return 0;
}

