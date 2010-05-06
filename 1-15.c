/* Exercise 1-15.
 * Rewrite the temperature conversion program of Section 1.2 to use a 
 * function for conversion.
 */

#include <stdio.h>

int conversion(int, int);

int main(void) {
    conversion(300, 20);

    return 0;
}

int conversion(int max, int step) {
    int fahr;

    for (fahr = 0; fahr <= max; fahr += step)
        printf("%3d %6.f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    return 0;
}
