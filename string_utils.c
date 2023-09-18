#include "main.h"

/**
 * fmt_normal - Print non special character
 * @c: The character
 * @buffer: pointer to the start character of the buffer
 * @buf_len: pointer to the current buffer print position
 * Return: printed count
 */
int fmt_normal(char c, char *buffer, unsigned int *buf_len)
{
	int i = 0;

	if (c != '%')
	{
		i += add_to_buffer('%', buffer, buf_len);
	}
	i += add_to_buffer(c, buffer, buf_len);
	return (i);
}

/**
 * clear_space - Clear spaces after %
 * @str: Pointer to buffer
 * Return: num of spaces
 */
int clear_space(const char *str)
{
	int c = 0;

	while (*str == ' ')
	{
		c += 1;
		str++;
	}

	return (c);
}
