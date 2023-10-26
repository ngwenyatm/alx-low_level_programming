#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n) 
{ 
    for (int i = 31; i >= 0; i--) { 
        int shift = n >> i;  
        if (shift & 1)  
              printf("1"); 
        else printf("0"); 
    } 
} 
