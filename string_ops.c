#include "main.h"

/**
 * prnt_char - prints a character
 * @args: variadic func args list
 * @buffer: pointer to the start character of the buffer
 * @buf_len: pointer to the current buffer print position
 * Return: Numbers of characters printed
 */
int prnt_char(va_list args, char *buffer, unsigned int *buf_len)
{
	return (add_to_buffer(va_arg(args, int), buffer, buf_len));
}

/**
 * prnt_string - prints a string
 * @args: variadic func args list
 * @buffer: pointer to the start character of the buffer
 * @buf_len: pointer to the current buffer print position
 * Return: Numbers of characters printed
 */
int prnt_string(va_list args, char *buffer, unsigned int *buf_len)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (!str)
		str = "(null)";
	while (*str)
	{
		i += add_to_buffer(*str, buffer, buf_len);
		str++;
	}
	return (i);
}

/**
 * prnt_custom_string - prints custom string
 * @args: variadic func args list
 * @buffer: pointer to the start character of the buffer
 * @buf_len: pointer to the current buffer print position
 * Return: Numbers of characters printed
 */
int prnt_custom_string(va_list args, char *buffer, unsigned int *buf_len)
{
	char *str = va_arg(args, char *);
	int i = 0;

	if (!str)
		str = "(null)";
	while (*str)
	{
		if ((*str >= 0 && *str < 32) || *str >= 127)
		{
			i += add_to_buffer('\\', buffer, buf_len);
			i += add_to_buffer('x', buffer, buf_len);
			i += add_to_buffer('0', buffer, buf_len);
			if (*str == 0)
				i += add_to_buffer('0', buffer, buf_len);
			else
				i += fmt_base_from_10(16, 1, *str, buffer, buf_len);
		}
		else
			i += add_to_buffer(*str, buffer, buf_len);
		str++;
	}
	return (i);
}
