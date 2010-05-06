/* Exercise 1-17.
 * Write a program to print all input lines that are longer than 80
 * characters.
 */

#include <stdio.h>

#define MAX 100
#define MIN 8

int _getline(char *, int);

int main(void) {
    int c;
    char array[MAX] = {0};

    while ((c = _getline(array, MAX)) > 0)
        if (c > MIN)
            printf("%s", array);
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
