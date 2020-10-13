/*
* this program uses the formula °C = (5/9)(°F-32) to print the following table
* 1		-17
* 20	-6
* 40	4
* 60	15
* 80	26
* 100	37
* 120	48
* 140	60
* 160	71
* 180	82
* 200	93
* 220	104
* 240	115
* 260	126
* 280	137
* 300	148
*/
/* print Fahrenheit-Celsius table
   for fahr = 0, 29, ..., 300 */

#include <stdio.h>

int main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;		/* lower limit of temperature scale */
	upper = 300;	/* upper limit */
	step  = 20;		/* step size */

	fahr = lower;
	puts("celcius\tfahrenheit");
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}