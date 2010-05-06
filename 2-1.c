/* Exercise 2.1
 * Write a program to determine the range of char, short, int and long
 * variables, both signed and unsigned, by printing appropriate values
 * from standard headers and by direct computation.  Harder if you
 * compute them: determine the ranges of the various floating-point
 * types.
 */

#include <limits.h>
#include <stdio.h>

int main(void) {
    printf("type char has a range of %i to %i\n", 
            CHAR_MIN, CHAR_MAX);
    printf("type signed char has a range of %i to %i\n",
            SCHAR_MIN, SCHAR_MAX);
    printf("type unsigned char has a range of 0 to %i\n",
            UCHAR_MAX);
    printf("type short int has a range of %i to %i\n",
            SHRT_MIN, SHRT_MAX);
    printf("type unsigned short has a range of 0 to %i\n",
            USHRT_MAX);
    printf("type int has a range of %i to %i\n", 
        INT_MIN, INT_MAX);
    printf("type unsigned int has a range of 0 to %u\n",
            UINT_MAX);
    printf("type long int has a range of %ld to %ld\n",
            LONG_MIN, LONG_MAX);
    printf("type unsigned long int has a range of 0 to %lu\n",
            ULONG_MAX);

    return 0;
}
