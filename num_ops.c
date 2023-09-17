#include "main.h"

/**
 * prnt_int - prints an integer
 * @args: variadic func args list
 * @buffer: pointer to the start character of the buffer
 * @buf_len: pointer to the current buffer print position
 * Return: Numbers of characters printed
 */
int prnt_int(va_list args, char *buffer, unsigned int *buf_len)
{
	int c = 0, num;

	num = va_arg(args, int);
	if (num < 0)
	{
		c += add_to_buffer('-', buffer, buf_len);
		num = _abs(num);
	}
	c += fmt_int((unsigned int)num, buffer, buf_len);
	return (c);
}

/**
 * prnt_binary - prints binary
 * @args: variadic func args list
 * @buffer: pointer to the start character of the buffer
 * @buf_len: pointer to the current buffer print position
 * Return: Numbers of characters printed
 */
int prnt_binary(va_list args, char *buffer, unsigned int *buf_len)
{
	int c = 0;

	c += fmt_base_from_10(2, 0, va_arg(args, unsigned int), buffer, buf_len);
	return (c);
}

/**
 * prnt_octal - prints octal
 * @args: variadic func args list
 * @buffer: pointer to the start character of the buffer
 * @buf_len: pointer to the current buffer print position
 * Return: Numbers of characters printed
 */
int prnt_octal(va_list args, char *buffer, unsigned int *buf_len)
{
	int c = 0;

	c += fmt_base_from_10(8, 0, va_arg(args, unsigned int), buffer, buf_len);
	return (c);
}

/**
 * prnt_hex_lower - prints hexadecimal lowercase
 * @args: variadic func args list
 * @buffer: pointer to the start character of the buffer
 * @buf_len: pointer to the current buffer print position
 * Return: Numbers of characters printed
 */
int prnt_hex_lower(va_list args, char *buffer, unsigned int *buf_len)
{
	int c = 0;

	c += fmt_base_from_10(16, 0, va_arg(args, unsigned int), buffer, buf_len);
	return (c);
}

/**
 * prnt_hex_upper - prints hexadecimal lowercase
 * @args: variadic func args list
 * @buffer: pointer to the start character of the buffer
 * @buf_len: pointer to the current buffer print position
 * Return: Numbers of characters printed
 */
int prnt_hex_upper(va_list args, char *buffer, unsigned int *buf_len)
{
	int c = 0;

	c += fmt_base_from_10(16, 1, va_arg(args, unsigned int), buffer, buf_len);
	return (c);
}
