/* Exercise 1-10.
 * Write a program to copy its input to its output, replacing each tab by
 * \t, each backspace by \b, and each backslash by \\.  This makes tabs and
 * backslashes visible in an unambiguous way.
 */

#include <stdio.h>
#define TAB '\t'
#define BACKSPACE '\b'
#define BACKSLASH '\\'

int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == TAB)
            printf("\\t");
        else if (c == BACKSPACE)
            printf("\\b");
        else if (c == BACKSLASH)
            printf("\\\\");
        else putchar(c);
    }

    return 0;
}
