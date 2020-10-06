#include <stdio.h>

int power(int m, int n);

int main()
{
        int i;

        for (i = 0; i < 10; ++i)
            printf("%d %d %d\n", i, power (2,i), power(-3,i));
        return 0;
}

/*power: raise base (2 in the second column, -3 in the next, n is 0 to 9 i.e. first column) to n-th power */
int power(int base, int n)
{
        int i, p;

        p = 1;
        for (i = 1; i <=n; ++i)
            p = p * base;
        return p;
}