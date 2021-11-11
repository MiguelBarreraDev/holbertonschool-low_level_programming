#include <unistd.h>
#include <string.h>
void first(void) __attribute__ ((constructor));
/**
 * first - functions that print before the main
 * function is executed
 */
void first(void)
{
	char *text_1 = "You're beat! and yet, you must allow,\n";
	char *text_2 = "I bore my house upon my back!\n";

	write(1, text_1, strlen(text_1));
	write(1, text_2, strlen(text_2));
}
