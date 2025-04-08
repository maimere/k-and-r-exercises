#include <stdio.h>

/* wc clone */
/* Counts lines, words and characters of input */

#define IN 	1 	/* inside a word */
#define OUT 	0	/* outside a word */

int main()
{
	int c, nl, nw, nc, state;

	state = OUT;

	nl = nw = nc = 0;

	while ((c = getchar()) != EOF)
	{
		++nc;

		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\t' || c == '\n')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("Lines: %d; Words: %d; Characters: %d\n", nl, nw, nc);
	return 0;
}
