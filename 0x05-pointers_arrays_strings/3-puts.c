#include "main.h"

/**
 * _puts - function that prints a string
 * @str: - pointer to the string
 * Return: string and new line
 */

void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}

