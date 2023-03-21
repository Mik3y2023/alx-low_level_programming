#include <stdio.h>
/** main - this is the main entry point
 *
 * return: always return 0 (success)
 */

int main(void)
{
	char c;
	c = 'a';
	while (c <= 'z' && c != 'q' && c != 'e') {
		putchar(c);
		c++;
	}
	putchar('\n');
	return 0;
}
