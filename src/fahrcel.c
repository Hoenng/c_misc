#include <stdio.h>
/*i fahrcel.c */
/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

int main() 
{
float fahr, celsius;
float lower, upper, step;
lower = 0; upper = 300; step = 10;

/* lower limit of temperature scale */ /* upper limit */
/* step size */

printf("Fahr    Cels\n");
fahr = lower;
while (fahr <= upper) {
	celsius = (5.0/9.0) * (fahr-32.0); 
	printf("%3.0f %6.1f\n", fahr, celsius);
	fahr = fahr + step;

} 
}
