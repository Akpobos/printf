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

/**
 * prnt_ptr - prints pointer address
 * @args: variadic function args list
 * @buffer: pointer to buffer
 * @buf_len: pointer to buffer position
 * Return: Number of characters printed
 */
int prnt_ptr(va_list args, char *buffer, unsigned int *buf_len)
{
	void *ptr = va_arg(args, void *);
	int count = 0;

	count += add_to_buffer('0', buffer, buf_len);
	count += add_to_buffer('x', buffer, buf_len);
	count += fmt_ptrs((uintptr_t)ptr, buffer, buf_len);
	return (count);
}
