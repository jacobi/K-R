/* Exercise 3-3.
* Write a function expand(s1, s2) that expands shorthand notations like a-z in
* the string s1, into the equivalent complete list abc...xyz in s2, Allow for
* letters of either case and digits and be prepared to handle cases like a-b-c
* and a-z0-9 and -a-z. Arrange that a leading or trailing - is taken litterally
*/

#include <stdio.h>
#include <ctype.h>

#define MAX 1024

char *expand(char *, char *);

int main(void) {
    char s2[MAX] = {0};

    printf("%s\n", expand("a-z", s2));
    return 0;
}

/* We cater only for contingous character types.
*  Still needs a bit of refractoring.
*/

char *expand(char *s1, char *s2) {
    int i, j = 0;
    int k, m;

    for(i = 0; s1[i]; i++) {
        (s1[i] == '-') ? (isalnum(s1[i+1]) ? j = s1[i+1] : 0) : 0;
        if (isalnum(s1[i-1]))
            for (k = s1[i-1], m = 0; k <= j; k++, m++)
                s2[m] = k;
    }
    s2[m] = '\0';

    return s2;
}
