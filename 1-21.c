/* Exercise 1-21.
 * Write a program entab that replaces strings of blanks by the minimum
 * number of tabs and blanks to achieve the same amount of spacing.  Use
 * the same tabstops as for detab.  When either a tab or a single blank
 * would suffice to reach a tabstop, which should be given preference?
 */

#include <stdio.h>

#define TABSTOP 8
#define MAX  1024

int _getline(char *, int);

int main(void) {
    int c = 0;
    int i, j;
    int spaces = 0;
    int count = 0;
    char array[MAX] = {0};

    while ((c = _getline(array, MAX)) != EOF) {
        for (i = 0, j = 0; array[i] != '\n'; i++, j++) {
            if (array[i] == '_') {
                count++;
            }

            else {
                if (count < TABSTOP && count > 0) {
                    for (; count > 0; count--) {
                        putchar('_');
                    }
                }

                count = 0;
                putchar(array[i]);
            }

            if (count >= TABSTOP) {
                spaces = count % TABSTOP;
                putchar('\t');
                count -= TABSTOP;
            }

            if (spaces >= TABSTOP)
                count += TABSTOP % spaces;
        }
    }

    return 0;
}

int _getline(char *s, int limit) {
    int c, i, j;

    for (i = 0, j = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < limit - 1)
            s[i] = c;
        ++j;
    }

    if (c == '\n') {
        s[i] = c;
        ++i, ++j;
    }

    s[i] = '\0';

    return j;
}

