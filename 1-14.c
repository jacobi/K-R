/* Exercise 1-14.
 * Write a program to print a histogram of the frequencies of different 
 * characters in its input.
 */

#include <stdio.h>

#define ASCIIZ 256

int main(void) {
    int c, i, j;
    char array[ASCIIZ] = {0};

    while ((c = getchar()) != EOF) {
        array[c]++;
    }

    for (i = 0; i < ASCIIZ; ++i) {
        if (array[i] > 0) {
            if (i == '\n') {
                printf("\n'\\n': ");
            } else if (i == ' ') {
                printf("\n ' ': ");
            } else if (i == '\t') {
                printf("\n'\\t': ");
            } else
                printf("\n '%c': ", i);
            for (j = 0; j < array[i]; ++j)
                putchar('*');
        }
    }
    putchar('\n');

    return 0;
}
