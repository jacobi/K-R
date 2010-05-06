/* Exercise 1-18.
 * Write a program to remove trailing blanks and tabs from each line of
 * input, and to delete entirely blank lines.
 */

#include <stdio.h>
#include <string.h>
#define MAX 100

int _getline(char *, int);

int main(void) {
    char array[MAX] = {0};
    int c, i;
    int state = 0;

    while ((c = _getline(array, MAX)) > 0) {
        for (i = strlen(array) - 1; i >= 0; --i) {
            if (array[i] != ' ' && array[i] != '\t' && array[i] != '\n') {
                state = 1;
                array[i + 1] = '\0';
                break;
            }

            if (state == 0 && i == 0) array[i] = '\0';
        }
        printf("%s", array);
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
