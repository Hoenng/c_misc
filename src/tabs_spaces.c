#include <stdio.h>

/* exercise 1-20 detab.c */
/* Replaces tabs with a space */

void detab (int n);

int main ()
{
	detab(8);
	return 0;
}

void detab (int n)
{
    int	column, c;
    
    column = 0;
	while ((c = getchar()) != EOF ) {
        if (c == '\t') 
            do {
                putchar ('x');
                column++;
            } while (column % n);
        else
        {
            putchar(c);
		    if (c == '\n')
    			column = 0;
			else
				column++;
        }
    }
}