#ifndef _MAIN_H
#define _MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#ifdef DEBUG /*prints debug statements*/
#endif
int _length(unsigned long int n);
void debug_3(unsigned long int mask);
void debug_2(unsigned long int n, unsigned long int mask);
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
void debug_1(unsigned long int n, int length, unsigned long int mask);
#endif
