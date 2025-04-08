#include <stdio.h>

/* exercise 1-8: conting blanks, tabs and newlines */

int main()
{
	int c, bc, tc, lc;

	bc = tc = lc = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++bc;
		if (c == '\t')
			++tc;
		if (c == '\n')
			++lc;
	}
	printf("# of spaces: %d; # of tabs: %d; # of lines: %d.\n", bc, tc, lc);
	return 0;
}
