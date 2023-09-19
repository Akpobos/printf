#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    int len3;
    int len4;
    unsigned int ui;
    void *addr;

    len = _printf("Let's %c try %% to printf %s a simple sentence.\n", 'B', "Hello");
    len2 = printf("Let's %c try %% to printf %s a simple sentence.\n", 'B', "Hello");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    len = _printf("Let's try %c %% to printf        a simple sentence. %s\n", 'A', NULL);
    len2 = printf("Let's try %c %% to printf        a simple sentence. %s\n", 'A', NULL);
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    len3 = _printf("Length:[%d, %i]\n", len, len);
    len4 = printf("Length:[%d, %i]\n", len2, len2);
    _printf("Length:[%d, %i]\n", len3, len3);
    printf("Length:[%d, %i]\n", len4, len4);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Binary:[%b]\n", 98);
    len2 = printf("Binary:[%b]\n", 98);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("Binary:[%b]\n", 0);
    len2 = printf("Binary:[%b]\n", 0);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("Octal:[%o]\n", 98);
    len2 = printf("Octal:[%o]\n", 98);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%    d]\n", len);
    printf("Len:[%    d]\n", len2);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    _printf("%S\n", "Best\nSchool");
    return (0);
}
