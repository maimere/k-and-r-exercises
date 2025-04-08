#include <stdio.h>

/* Character count */

int main()
{
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("Character count: %ld\n", nc);
	return 0;
}
