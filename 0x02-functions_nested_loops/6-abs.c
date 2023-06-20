#include "main.h"
/**
 * _abs - the abs function
 *
 * @val: value to be checked 
 *
 * Return: Always 0.
 */
int _abs(int val)
{
	if (val < 0)
	{
	  int abs_val;

	  abs_val = val * -1;

	  return (abs_val);
	}
	return (val);
}
