#include <stdio.h>

/* Counting lines */

int main()
{
	int c, lc;

	lc = 0;
	while ((c = getchar()) != EOF)
		if (c == '\n')
			++lc;
	printf("Number of lines: %d\n", lc);
	return 0;
}
