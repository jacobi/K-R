/* Exercise 3-2.  Write a function escape(s, t) that converts characters
 * like newline and tab into visible escape sequences like \n and \t as it
 * copies the string t to s.  Use a switch.  Write a function for the other
 * direction as well converting escape sequences into real characters.
 *
 */

#include <stdio.h>
#include <string.h>

#define MAXLINE 10

int escape(char *,  char *);

int
main(void)
{
	char s[] = "Hello\nWorld\n";
    char t[MAXLINE] = {0};
    
    escape(s, t);
    
    return(0);
}

int
escape(char *s,  char *t)
{
    int i;

    for(i = 0; i < strlen(s); i++) {
        switch(s[i]) {
            case('\n'):
                t[i++] = "\\n";
                i -= 1;
                break;
            case('\t'):
                t[i++] = "\\t";
                i -= 1;
                break;
            default:
                t[i] = s[i];
                break;
        }
    }
    printf("%s", s);
    printf("%s", t);

    return(0);
}
