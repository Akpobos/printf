#include "main.h"

/**
 * print_buffer - Prints the buffer to stdout
 * @buffer: Pointer to the start of the buffer character
 * @buf_len: Pointer to the current length of the buffer to print
 * Return: Number of bytes printed to the output
 */
int print_buffer(char *buffer, unsigned int *buf_len)
{
	int i = 0;

	i = write(1, buffer, *buf_len);
	*buf_len = 0;
	return (i);
}

/**
 * add_to_buffer - Adds a character to the buffer
 * @c: The character to add to the buffer
 * @buffer: Pointer to the start of the buffer character
 * @buf_len: Pointer to the index to add the character in the buffer
 * Return: Number of bytes printed to stdout
 */
int add_to_buffer(char c, char *buffer, unsigned int *buf_len)
{
	int i = 0;

	if (*buf_len >= BUFFER_SIZE)
		i = print_buffer(buffer, buf_len);
	buffer[*buf_len] = c;
	*buf_len += 1;
	return (i);
}
