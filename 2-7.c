/* Exercise 2.6
 * Write a function setbits(x, p, n, y) that returns x with the n bits
 * that begin at position p inverted (i.e., 1 changed into 0 and vice
 * versa), leaving the others unchanged.
 */

#include <stdio.h>

unsigned invert(unsigned, int, int);

int main(void)
{
    printf("%u\n", invert(255, 4, 3));
    return 0;
}

unsigned invert(unsigned x, int p, int n)
{
    if (!n) return x;
    return (x & ~(p << ((1 << n -1) - 1)));
}
