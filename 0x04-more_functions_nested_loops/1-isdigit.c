#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if(c >= 48 && c <= 57)
	{
		Return (1);
		printf("%c: %d\n", c, _isdigit(c));
	}
	else
	{
		Return (0);
		printf("%c: %d\n", c, _isdigit(c));
	}
}
