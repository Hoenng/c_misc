#include <stdio.h>
/*i fahrcel.c */
/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

int main() 
{
int fahr, celsius;
int lower, upper, step;
lower = 0; upper = 300; step = 10;

/* lower limit of temperature scale */ /* upper limit */
/* step size */

printf("Fahr    Cels\n");
fahr = lower;
while (fahr <= upper) {
celsius = 5 * (fahr-32) / 9; printf("%d\t%d\n", fahr, celsius); fahr = fahr + step;
} 
}
