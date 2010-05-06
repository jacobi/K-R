/* Write a program to remove all comments from a C program. Don't forget to
 * handle quoted strings and character constants properly.  C comments
 * don't nest.
 */

#include <stdio.h>
#define MAX 100

int main(void) {
    int comment = 0;
    int c, i, j;
    int count = 0;
    char buffer[MAX] = {0};

    while ((c = getchar()) != EOF) {
        if (count <= MAX - 1)
            buffer[count++] = c;
    }
    buffer[count] = '\0';

    for (i = 0; i < MAX; i++) {
        if (buffer[i] == '/' && buffer[i + 1] == '*') 
            comment = 1;
        
        else if (buffer[i] == '*' && buffer[i + 1] == '/') {
            i += 2;
            comment = 0;
        }
        
        if (comment == 0)
            printf("%c", buffer[i]);
    }
    return 0;
}
