/* Exercise 1-6.
 * Verify whether the expression getchar() != EOF is 0 or 1. 
 */

#include <stdio.h>

int main(void) {
    int c = 0;

    c = getchar() != EOF;
    printf("%d\n", c);

    return 0;
}
