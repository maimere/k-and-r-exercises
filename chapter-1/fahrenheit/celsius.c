#include <stdio.h>

/* Celsius to Fahrenheir */

int main()
{
	float celsius, fahr;
	int lower, upper, step;

	lower = -30;
	upper = 150;
	step = 20;

	celsius = lower;

	printf("%12s%12s\n", "Celsius", "Fahrenheit");

	while(celsius <= upper) {
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%12.0f%12.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}
