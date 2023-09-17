#include "main.h"

/**
 * _abs - Gets the absolute value of a number
 * @num: The number
 * Return: The absolute of the number
 */
int _abs(int num)
{
	if (num < 0)
		return (-1 * num);
	return (num);
}

/**
 * fmt_int - format and prints integer to stdout
 * @num: The number
 * @buffer: Pointer to buffer
 * @buf_len: Length of the buffer
 * Return: Number of prints to std out
 */
int fmt_int(unsigned int num, char *buffer, unsigned int *buf_len)
{
	int c = 0;

	if (num > 9)
	{
		c += fmt_int((num / 10), buffer, buf_len);
		c += add_to_buffer(((num % 10) + 48), buffer, buf_len);
	}
	else
		c += add_to_buffer((num + 48), buffer, buf_len);
	return (c);
}

/**
 * fmt_base_from_10 - format, convert from base 10 to and base,
 * prints integer to stdout
 * @base: Base to convert to
 * @cap: capitalize only used for base 16
 * @num: The number
 * @buffer: Pointer to buffer
 * @buf_len: Length of the buffer
 * Return: Number of prints to std out
 */
int fmt_base_from_10(
		unsigned int base,
		unsigned int cap,
		unsigned int num,
		char *buffer,
		unsigned int *buf_len
		)
{
	int i = 0;
	unsigned int ascii_base, div, mod;

	div = num / base;
	mod = num % base;
	if (mod < 10)
		ascii_base = 48;
	else
	{
		if (cap)
			ascii_base = 55;
		else
			ascii_base = 87;
	}

	if (num <= 0)
		return (i);
	i += fmt_base_from_10(base, cap, div, buffer, buf_len);
	i += add_to_buffer((mod + ascii_base), buffer, buf_len);
	return (i);
}
