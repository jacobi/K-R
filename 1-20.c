/* Exercise 1-20.
 * Write a program detab that replaces tabs in the input wth the proper
 * number of blanks to space to the next tab stop.  Assume a fixed set of
 * tab stops say, every n columns.  Should n be a variable or a symbolic
 * parameter?
 */

#include <stdio.h>

#define TABSTOP 4
#define BLANK   ' '

int main(void) {
    int c, i;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            for (i = 0; i < TABSTOP; i++) {
                putchar(BLANK);
            }
        }
        else
            putchar(c);    
    }

    return 0;
}
