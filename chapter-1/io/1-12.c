#include <stdio.h>

/* exercise 1-12 */
/* write a program that prints its input one word per line */

int main()
{
	int c, blank_flag;

	blank_flag = 1;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			if (blank_flag == 0)
			{
				++blank_flag;
				printf("\n");
			}
		}
		else
		{
			blank_flag = 0;
			printf("%c", c);
		}
	}
	return 0;
}
