/* Exercise 1-19.
 * Write a function reverse(s) that reverses the character string s.  Use
 * it to write a program that reverses its input a line at a time.
 */

#include <stdio.h>
#include <string.h>

#define MAX 100

int reverse(char *);

int main(void) {
    int c;
    char array[MAX] = {0};

    while ((_getline(array, MAX)) > 0) {
        reverse(array);
    }

    return 0;
}

int reverse(char *s) {
    int i;

    for (i = strlen(s); i >= 0; --i) {
        if (s[i] == '\n') // I just don't like the extra lines.
            continue;
        else
            putchar(s[i]);
        
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
