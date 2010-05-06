/* Exercise 2-5.
 * Write the function any(s1, s2), which returns the first location in
 * the string s1 where the character from the string s2 occurs, or -1
 * if s1 contains no characters from s2.  (The standard library
 * function strpbrk does the same job, but returns a pointer to the
 * location).
 */

#include <stdio.h>

int any(char[], char[]);

int main(void)
{
    char s1[] = "ABCDEF1234";
    char s2[] = "1234567890";

    printf("%d\n", any(s1, s2));
    return 0;
}

int any(char s1[], char s2[])
{
	int c, d;

	for (c = 0; s1[c] != '\0'; c++) {
		for (d = 0; s2[d] != '\0'; d++) {
			if (s1[c] == s2[d]) return c;
		}
	}
	return -1;
}
