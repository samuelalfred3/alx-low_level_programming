#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On the success 1.
 * On error, -1 is retured, and errno is set appropriatetly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
