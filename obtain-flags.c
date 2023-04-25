#include "main.h"

/**
 * get_flags - calculates the active flags
 * @format: formatted string to print the arguments
 * @q: take a parameter.
 * Return: Flags
 */
int get_flags(const char *format, int *q)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int q, curr_q;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_q = *q + 1; format[curr_q] != '\0'; curr_q++)
	{
		for (q = 0; FLAGS_CH[q] != '\0'; q++)
			if (format[curr_q] == FLAGS_CH[q])
			{
				flags |= FLAGS_ARR[q];
				break;
			}

		if (FLAGS_CH[q] == 0)
			break;
	}

	*q = curr_q - 1;

	return (flags);
}
