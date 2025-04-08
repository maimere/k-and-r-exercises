#include <stdio.h>

/* exercise 1-10 */
/* prints input, substituting: */
/* tabs 	for	 \t 	*/
/* backspace 	for	 \b 	*/
/* backslash 	for	 \\	*/

int main()
{
	int c, flag;

	while ((c = getchar()) != EOF)
	{
		flag = 0;
		if (c == '\t')
		{
			printf("\\t");
			++flag;
		}
		if (c == '\b')
		{
			printf("\\b");
			++flag;
		}
		if (c == '\\')
		{
			printf("\\\\");
			++flag;
		}
		if (flag == 0)
			printf("%c", c);
	}
	return 0;
}
