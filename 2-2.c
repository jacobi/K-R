/* Exercise 2-2.
 * Write a loop equivalent to the for loop above without using && or ||
 * for (i = 0; i < lim -1 && (c = getchar()) != '\n' && != EOF; ++i
 *      s[i] = c;
 */

#include <stdio.h>

int main(void) {
    int i;
    int lim = 10;
    int c;
    char s[lim];

    i = 0;
    while (i < lim - 1) {
        if ((c = getchar()) != EOF)
            if (c != '\n')
                s[i] = c;
        ++i;
    }

    return 0;
}
