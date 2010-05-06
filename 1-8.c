/* Exercise 1-8.
 * Write a program to count blanks, tabs and newlines.
 */

#include <stdio.h>

int main(void) {
    int blanks = 0, tabs = 0, newlines = 0;
    int c = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++blanks;
        if (c == '\t')
            ++tabs;
        if (c == '\n')
            ++newlines;
    }

    printf("%d %d %d\n", blanks, tabs, newlines);
    
    return 0;
}
