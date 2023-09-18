#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: The format string
 * Return: he number of characters printed
 */
int _printf(const char *format, ...)
{
	char buffer[BUFFER_SIZE];
	unsigned int buf_len = 0;
	int prtd = 0;
	va_list args;

	if (!format || *format == '\0')
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			int (*f)(va_list args, char *buffer, unsigned int *buf_len);

			format++;
			format += clear_space(format);
			f = get_op_func(*format);
			if (f)
				prtd += f(args, buffer, &buf_len);
			else
				prtd += fmt_normal(*format, buffer, &buf_len);
			format++;
			continue;
		}
		prtd += add_to_buffer(*format, buffer, &buf_len);
		format++;
	}
	if (buf_len)
		prtd += print_buffer(buffer, &buf_len);
	va_end(args);
	return (prtd);
}
