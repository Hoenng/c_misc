#include <stdio.h>

int main()
{
    int numbers[10];

    int i;

    for (i = 0; i < 10; ++i)
        numbers[i] = i;

    for (i = 0; i < 10; ++i)
        printf("%d", numbers[i]);

}
