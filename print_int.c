#include "main.h"

/**
 * print_int - prints a given integer from variadic parameters
 * @args: variadic parameter
 * Return: number of characters printed on Success
 */

int print_int(va_list args)
{
	int i = 0;
	int count = 0;
	int num;
	int my_arr[10];
	char x[1];

	num = va_arg(args, int);

	while (num != 0)
	{
		my_arr[i] = (num % 10);
		num = num / 10;
		if (num == 0)
			break;
		else
			i++;
	}
	for (i; i >= 0; i--)
	{
		x[0] = ('0' + my_arr[i]);
		count += write(1, x, 1);
	}
	return (count);
}
