/* Exercise 2-4.
 * Write an alternative version of squeeze(s1, s2) that deletes each
 * character in s1 that matches any character in the string s2.
 */

#include <stdio.h>

int squeeze(char s1[], char s2[]);

int main(void) {
	char string1[] = "ABCDEF1234";
	char string2[] = "1234567890";

	squeeze(string1, string2);
	printf("%s", string1);

	return 0;
}

int squeeze(char s1[], char s2[])
{
	int c, d;
    int e = 0;

    for (c = 0; s1[c] != '\0'; c++) {
		for (d = 0; s2[d] != '\0'; d++) {
			if (s1[c] == s2[d]) 
                s1[e++] = s2[d];
            else 
                s1[e] = '\0';
        }
    }

	return 0;
}
