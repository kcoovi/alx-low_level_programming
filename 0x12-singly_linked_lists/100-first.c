#include <stdio.h>

/**
 * pre_main - function before main
 */
void __attribute__ ((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}

/**
 * main - main function
 * Return: 0
 */
int main(void)
{

}
