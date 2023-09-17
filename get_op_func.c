#include "main.h"

/**
 * get_op_func - Gets the right function for the specifier
 * @c: Specifier character
 * Return: function to handle the specifier type
 */
int (*get_op_func(char c))(va_list args, char *buffer, unsigned int *buf_len)
{
	spfr_t ops[] = {
		{ 'c', prnt_char },
		{ 's', prnt_string },
		{ 'S', prnt_custom_string },
		{ 'i', prnt_int },
		{ 'd', prnt_int },
		{ 'b', prnt_binary },
		{ 'o', prnt_octal },
		{ 'x', prnt_hex_lower },
		{ 'X', prnt_hex_upper },
		{ 'u', prnt_uint }
	};
	unsigned int i;

	for (i = 0; i < 10; i++)
	{
		if (ops[i].fmt == c)
			return (ops[i].f);
	}
	return (NULL);
}
