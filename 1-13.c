/* Exercise 1-13.
 * Write a program to print a histogram of the lengths of words in input.
 * It is easy to draw the histogram with the bars horizontal; a vertical 
 * orientation is more challenging.
 */

#include <stdio.h>

#define MAX 1024

int main(void) {
    int c, i;
    int count = 0;
    char array[MAX] = {0};

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            array[count]++;
            count = 0;
        }
        else
            count++;
    }

    for (count = 0; count < MAX; ++count) {
        if (array[count] > 0) {
            printf("\n%d: ", count);
            for (i = 0; i < array[count]; ++i)
                printf("*");
        }
    }
    printf("\n");

    return 0;
}
