#include "main.h"
#include <stdint.h>

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
	count += fmt_base_from_10(16, 0, (unsigned int)(uintptr_t)ptr, buffer, buf_len);

	return (count);
}
