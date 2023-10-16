#include "main.h"

/**
 * get_precision - finds the precision from the format string
 *
 * @b: Format string
 * @params: Parameters struct
 * @ap: Argument pointer
 *
 * Return: New pointer
*/

char *get_precision(char *b, params_t *params, va_list ap)
{
	int d = 0;

	if (*b != '.')
		return (b);
	b++;
	if (*b == '*')
	{
		d = va_arg(ap, int);
		b++;
	}
	else
	{
		while (_isdigit(*b))
			d = d * 10 + (*b++ - '0');
	}
	params->precision = d;
	return (b);
}
