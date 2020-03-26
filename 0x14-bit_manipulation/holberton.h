#ifndef _HOLBERTON_H
#define _HOLBERTON_H
/*Import libraries*/
#include <stdlib.h>
#include <stdio.h>
/*Function prototype definitions*/
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
#endif
