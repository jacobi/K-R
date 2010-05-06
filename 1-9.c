/* Exercise 1-9.
 * Write a program to copy its input to its output, replacing each string
 * of one or more blanks by a single blank.
 */

#include <stdio.h>
#define BLANK ' '

int main(void) {
    int c, d;

    while ((c = getchar()) != EOF) {
        while (d == BLANK && c == BLANK)
            c = getchar();
        putchar(c);
        d = c;
    }

    return 0;
}
