#include "main.h"

/**
 * get_size - calculates the size to cast an argument
 * @format: formatted string in which to print the arguments
 * @t: List of arguments to be printed.
 *
 * Return: size
 */
int get_size(const char *format, int *t)
{
	int curr_f = *t + 1;
	int size = 0;

	if (format[curr_f] == 'l')
		size = S_LONG;
	else if (format[curr_f] == 'h')
		size = S_SHORT;

	if (size == 0)
		*t = curr_f - 1;
	else
		*t = curr_f;

	return (size);
}
