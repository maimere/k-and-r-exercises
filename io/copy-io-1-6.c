#include <stdio.h>

/* copy input to output; 2nd version */
/* exercise 1-6 */

int main()
{
	int c;

	while (c = getchar() != EOF)
		putchar(c);
	return 0;
}
