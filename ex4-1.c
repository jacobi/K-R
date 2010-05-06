/* Exercise 4-1.
 * Write the function strrindex(s, t), which returns the position of the
 * rightmost occurence of t in s, or -1 if there is none.
 */

#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int strrindex(char *, char *);
int _getline(char *, int);

char pattern[] = "ould";

int main(void) {
    char line[MAXLINE];
    int found = 0;

    while (_getline(line, MAXLINE) > 0) {
        if (strrindex(line, pattern) > 0) {
            printf("%d: %s", strrindex(line, pattern), line);
            found++;
        }
    }

    return found;
}

int strrindex(char *s, char *t) {
    int i;
    int j = 0;
    int count = 0;

    while (s[j] != '\0') {
        for (i = 0; t[i] != '\0'; i++) {
            if (s[j+i] == t[i]) {
                count++;
            } else {
                count--;
            }
        }

    if (count == -strlen(t)) {
        printf("%d\n", count * 10);
    }}
}

int _getline(char *s, int lim) {
    int c, i = 0;

    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n') {
        s[i++] = c;
    }

    s[i] = '\0';

    return i;

}
