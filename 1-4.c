/* Exercise 1-4.
 * Write a program to print the corresponding Celsius to Fahrenheit table.
 */

#include <stdio.h>

int main(void) {
    int celsius;

    for (celsius = 0; celsius <= 300; celsius += 20)
        printf("%3d %6.1f\n", celsius, (5.0 / 9.0) * (celsius + 32));
    return 0;
}
