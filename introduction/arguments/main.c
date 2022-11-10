#include <stdio.h>

int power(int base, int n)
{
    int p;

    for (p=1; n>0; --n)
        p = base * p;

    return p;
}


main()
{
    printf("%d\n", power(2,30));
}