#include <stdio.h>
#include "function_pointers.h"

/**
*print_name - prints name by function pointer
* @name: string
* @f: function pointer
* Return: no return
**/

void print_name(char *name, void (*f)(char *))
	{
		f(name);
	}
