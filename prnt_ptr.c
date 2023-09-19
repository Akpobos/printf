#include "main.h"

/**
 * prnt_ptr - prints pointer address
 * @argsL variadic function args list
 * @buffer: pointer to buffer
 * @buf_len: pointer to buffer position
 * Return: Number of characters printed
 */
int prnt_ptr(va_list args, char *buffer, unsigned int *buf_len)
{
	void *ptr = va_arg(args, void *);
	unsigned long int addr = (unsigned long int)ptr;
	int count = 0;

	count += add_to_buffer('0', buffer, buf_len);
	count += add_to_buffer('x', buffer, buf_len);

	if (addr == 0)
		c += add_to_buffer('0', buffer, buf_len);
	else
	{
		while (addr != 0)
		{
			unsigned int rem = addr % 16;
			char hex_digit;

			if (rem < 10)
				hex_digit = '0' + rem;
			else
				hex_digit = 'a' + (rem - 10);

			count += add_to_buffer(hex_digit, buffer, buf_len);
			addr /= 16;
		}
	}
	reverse_string(buffer + *buf_len - count, count);

	return (count);
}
