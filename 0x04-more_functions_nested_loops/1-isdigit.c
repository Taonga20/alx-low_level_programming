#include "main.h"

/**
 * _isdigit - check if number are 0 - 9
 * @C: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int C)
{
if (C >= '0' && C <= '9')
return (1);
else
return (0);
}
