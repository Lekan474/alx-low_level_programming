#include "main.h"
#include <ctype.h>

/**
 * _isdigit - entry point
 * @c: parameter to check
 * Return: returns 1 if isdigit and 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
