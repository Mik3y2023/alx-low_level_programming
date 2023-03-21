#include <stdio.h>
/** main - main entry point
 *
 * return: Always return 0 (success)
 */

int main(void)
{
	char c;
	c = 'a';
	while (c = 'a'){
		putchar(c);
		c++;
	}
	putchar('\n');
	return 0;
}
