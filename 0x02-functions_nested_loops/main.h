#ifndef MAIN_H
#define MAIN_H

#include <unistd.h> /* For the system call write */
#include <stdio.h>  /* For printf function */

/* Function Prototypes */

/* _putchar: Writes a character to stdout */
int _putchar(char c);

/* print_alphabet: Prints the alphabet in lowercase */
void print_alphabet(void);

/* print_alphabet_x10: Prints the alphabet in lowercase 10 times */
void print_alphabet_x10(void);

/* _islower: Checks if a character is lowercase */
int _islower(int c);

/* _isalpha: Checks if a character is alphabetic */
int _isalpha(int c);

/* print_sign: Prints the sign of a number (+, 0, or -) */
int print_sign(int n);

/* _abs: Computes the absolute value of an integer */
int _abs(int);

#endif /* MAIN_H */
