/* Exercise 1-16.
 * Revise the main routine of the longest-line program so it will correctly
 * print the length of arbitrarily long input lines, and as much as possible
 * of the text.
 */

/* IMO pretty buggy implementation, but it works.
 */

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int _getline(char *, int);
void copy(char *, char *);

/* print longest input line */

int main(void) {
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0;
    while ((len = _getline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("%d: %s\n", max, longest);
    return 0;
}

/* _getline:  read a line into s, return length. */

int _getline(char *s, int lim) {
    int c, i, j;

    for (i = 0, j = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i < lim - 1)
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

/* copy:  copy 'from' into 'to'; assume 'to' is big enough. */

void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
