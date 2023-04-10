#include "main.h"

/**
 * print_binary - prints the binary value.
 * of a number.
 * @n: receives unsigned long int as parameter.
 *
 * Return: none.
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
  2  
0x14-bit_manipulation/main.h
@@ -2,5 +2,7 @@
#define MAIN_H

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);

#endif
