/* Write a function htoi(s), which converts a string of hexadecimal digits
 * (including a possible 0x or 0X) into its equivalent integer value.  The
 * allowable digits are 0 through 9, A through F and a through f.
 */

#include <stdio.h>

int htoi(char *);

int main(void) 
{
	char base[] = "123abc";

	printf("%i\n", htoi(base));
	return 0;
}

int htoi(char *base)
{
	char range[] = "0123456789ABCDEF";

	int res = 0; 	/* Result of our operation */
	int c = 0;	    /* Our count in the range  */
	int d;		    /* Our current value       */

	for (d = 0; toupper((unsigned char) base[d]) != '\0'; d++) {
		for (c = 0; range[c] != '\0'; c++) {
			if (toupper((unsigned char) base[d]) == range[c]) break;
		}
		if (c > 16) 
            return res;
		res = res * 16 + c;
	}

	return res;
}
