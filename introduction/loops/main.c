#include <stdio.h>
main()
{
    // int fahr, celsius, lower, upper, step;
    // lower = 0; /* lower limit of temperature table */
    // upper = 300; /* upper limit */
    // step = 20; /* step size */
    // fahr = lower;
    // while (fahr <= upper) {
    //     celsius = 5 * (fahr-32) / 9;
    //     printf("%d\t%d\n", fahr, celsius);
    //     fahr = fahr + step;
    // }

    int fahr;
    for (fahr = 0; fahr <=300; fahr = fahr + 20)
        printf("%3d\t%4.1f\n", fahr, (5.0/9.0)*(fahr-32));
}