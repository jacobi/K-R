/* Exercise 2-10.  Rewrite the function lower, which converts upper case
 * letters to lower case, with a conditional expression instead of if-else.
 */

#include <stdio.h>

int lower(int);

int lower(int x) {
    ((x >= 'A') && (x <= 'Z')) ? x = x - 'A' + 'a' : x;
    return x;
}

int main(void) {
    lower('A');
    lower('B');
    lower('x');
    lower('D');

    return 0;
}
