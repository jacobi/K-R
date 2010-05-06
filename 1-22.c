/* Write a program to fold long input lines into two or more shorter lines
 * after the last non-blank character that occurs before the n-th colum of
 * input. Make sure your program does something intelligent with long input
 * lines and if there are no blanks or tabs before the specified column.
 */

#include <stdio.h>
#define TEXTWIDTH 75
#define MAX     1024
#define SCAN       5

int main(void) {
    char buffer[MAX] = {0};
    int c, e = 0;
    int count = 0;

    while ((c = getchar()) != EOF) {
        if (e < TEXTWIDTH)
            buffer[count++] = c;

        else if (e >= TEXTWIDTH - SCAN && c == ' ' || c == '\t') {
            buffer[count++] = '\n';
            e = 0;
        }

        if (buffer[count] == '\n') {
            e = 0;
            count = 0;
        }
 
        e++;
    }
    buffer[count] = '\0';

    printf("%s", buffer);

    return 0;
}
