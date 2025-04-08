#include <stdio.h>

/* Character count, using for-loop */

int main()
{
	double nc;

	for (nc = 0;getchar() != EOF; ++nc)
		;
	printf("Character count: %.0f\n", nc);
	return 0;
}
