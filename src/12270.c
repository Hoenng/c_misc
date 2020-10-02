#include <stdio.h>

/*12270.c
#Input two numbers and work out their sum, average and sum of the squares of the numbers.
*/

#include <stdio.h>

int main(int argc, char *argv[])
{

int x,y;

x = atoi(argv[1]);
y = atoi(argv[2]);

float average;
int sum;
int squares;
int i;
int z[]= {x, y};


printf("The numbers inputted are %d %d\n", x, y);

sum= x + y;
printf("The sum of %d and %d is %d\n", x, y, sum);
average= sum / 2;
printf("The average of %d and %d is %f\n", x, y, average);

for (i = 0; i < 2; i++)
	{
	printf("Going round the for with %d\n", z[i]);
	squares= z[i] * z[i];
	printf("The square of %d is %d\n", z[i], squares);
	}
}