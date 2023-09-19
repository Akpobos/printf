#ifndef MAIN_H
#define MAIN_H

/* macros */
#define BUFFER_SIZE 1024

/* C Standard Libraries */
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* Structs */

/**
 * struct spfr_s - Specifier structure
 * @fmt: The format
 * @f: The function
 */
struct spfr_s
{
	char fmt;
	int (*f)(va_list args, char *buffer, unsigned int *buf_len);
};

/* Typedefs */
typedef struct spfr_s spfr_t;

/* PROTOTYPE DECLARATIONS - START */

/* Buffer */

/* buffer.c */
int add_to_buffer(char c, char *buffer, unsigned int *buf_len);
int print_buffer(char *buffer, unsigned int *buf_len);

/* select op prototype */

/* get_op_func.c */
int (*get_op_func(char c))(va_list args, char *buffer, unsigned int *buf_len);

/* Specifier Operations */

/* string_ops.c */
int prnt_char(va_list args, char *buffer, unsigned int *buf_len);
int prnt_string(va_list args, char *buffer, unsigned int *buf_len);
int prnt_custom_string(va_list, char *buffer, unsigned int *buf_len);

/* num_ops.c */
int prnt_int(va_list args, char *buffer, unsigned int *buf_len);
int prnt_binary(va_list args, char *buffer, unsigned int *buf_len);
int prnt_octal(va_list args, char *buffer, unsigned int *buf_len);
int prnt_hex_lower(va_list args, char *buffer, unsigned int *buf_len);
int prnt_hex_upper(va_list args, char *buffer, unsigned int *buf_len);

/* num_ops_2.c */
int prnt_uint(va_list args, char *buffer, unsigned int *buf_len);

/*prnt_ptr.c*/
int prnt_ptr(va_list args, char *buffer, unsigned int *buf_len);
/* UTILS - START */

/* Numbers */

/* string_utils.c */
int fmt_normal(char c, char *buffer, unsigned int *buf_len);
int clear_space(const char *str);

/* num_utils.c */
int _abs(int num);
int fmt_int(unsigned int num, char *buffer, unsigned int *buf_len);
int fmt_base_from_10(
		unsigned int base,
		unsigned int cap,
		unsigned int num,
		char *buffer,
		unsigned int *buf_len
		);

/* UTILS - END */

/* print prototype */

/* printf.c */
int _printf(const char *format, ...);

/* PROTOTYPE DECLARATIONS - END */

#endif
