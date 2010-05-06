/* Exercise 1-24.
 * Write a program to check a C program for rudimentary syntax errors
 * like unbalanced parenthesis, brackets and braces. Don't forget about
 * quotes, both single and double, escape sequences and comments. (this
 * program is hard if you do it in full generality).
 */

#include <stdio.h>
#define O_PAREN '('
#define C_PAREN ')'
#define O_BRACK '['
#define C_BRACK ']'
#define O_BRACE '{'
#define C_BRACE '}'
#define S_QUOTE '\''
#define D_QUOTE '\"'

int main(void) {
    int c;
    int parens = 0;
    int brack  = 0;
    int brace  = 0;
    int squote = 0;
    int dquote = 0;

    while ((c = getchar()) != EOF) {
        if (c == S_QUOTE) {
            squote++;
        }

        if (c == S_QUOTE && squote > 0) {
            squote--;
        }

        if (c == D_QUOTE) {
            dquote++;
        }

        if (c == D_QUOTE && dquote > 0) {
            dquote--;
        }

        if (c == O_PAREN) {
            parens++;
        }
        
        if (c == C_PAREN && parens > 0) {
            parens--;
        }

        if (c == O_BRACK) {
            brack++;
        }
        
        if (c == C_BRACK && brack > 0) {
            brack--;
        }
        
        if (c == O_BRACE) {
            brace++;
        }

        if (c == C_BRACE && brace > 0) {
            brace--;
        }
    }
    if (squote > 0) {
        printf("error: (%d) missing single quote\n", squote);
    }

    if (dquote > 0) {
        printf("error: (%d) missing double quote\n", dquote);
    }

    if (parens > 0) {
        printf("error: (%d) missing parenthesis\n", parens);
    }

    else if (brack > 0) {
        printf("error: (%d) missing bracket\n", brack);
    }

    else if (brace > 0) {
        printf("error: (%d) missing brace\n", brace);
    }

    return 0;
}
