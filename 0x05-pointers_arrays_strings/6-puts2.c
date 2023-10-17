#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first.
 * @str: input string
 * Return: no return
 */
void puts2(char *str)
{
	int length = 0;

	while (length >= 0)
	{
		if (str[length] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (length % 2 == 0)
		{
			_putchar(str[length]);
		}
		length++;
	}
}
