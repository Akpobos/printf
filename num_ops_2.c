#include "main.h"

/**
 * prnt_uint - prints an unsigned integer
 * @args: variadic func args list
 * @buffer: pointer to the start character of the buffer
 * @buf_len: pointer to the current buffer print position
 * Return: Numbers of characters printed
 */
int prnt_uint(va_list args, char *buffer, unsigned int *buf_len)
{
	int c = 0;

	c += fmt_int(va_arg(args, unsigned int), buffer, buf_len);
	return (c);
}
