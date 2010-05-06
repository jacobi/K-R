/* Exercise 2.6
 * Write a function setbits(x, p, n, y) that returns x with the n bits
 * that begin at position p set to the rightmost n bits of y, leaving
 * other bits unchanged.
 */

#include <stdio.h>

unsigned setbits(unsigned, int, int, unsigned);

int main(void)
{
    printf("%u\n", setbits(256, 4, 3, 255));
    return 0;
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    if (!n) return x;
    return ((x & ~(p << (1 << n - 1) - 1)) | ((y & ((1 << n - 1) - 1)) 
		    << p));
}
