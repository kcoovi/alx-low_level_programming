#include <stdio.h>
void beforeMain(void) __attribute__ ((constructor));

/**
 * beforeMain - function
 */
void beforeMain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
