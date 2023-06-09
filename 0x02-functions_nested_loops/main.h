#ifndef MAIN_H_
#define MAIN_H_
/**
 * _putchar - prints the character ch
 * @ch: parameter to print
 * Return: 1 or 0
 */
int _putchar(char ch);
/**
 * print_alphabet - prints alphabet from a to z
 * takes no parameter
 * Return: void
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - print alphabet from a to z 10 times
 * takes no parameters
 * Return: void
 */
void print_alphabet_x10(void);
/**
 * _islower checks for lowercase character @c
 *Returns 1 if @c is lowercase
 *Returns 0 otherwise
 */
int _islower(int c);
/**
 * _isalpha checks for alphabetic character.
 *Returns 1 if @c is a letter, lowercase or uppercase
 *Returns 0 otherwise
 */
int _isalpha(int c);
/**
*function print_sign that prints the sign of a number.
*Returns 1 and prints + if @n is greater than zero
*Returns 0 and prints 0 if @n is zero
*Returns -1 and prints - if @n is less than zero
*/
int print_sign(int n);
/**
 *_abs computes the absolute value of an integer.
 */
int _abs(int);
/**
 *print_last_digit prints the last digit of a number.
 *Returns the value of the last digit
 */
int print_last_digit(int);
/**
 *prints every minute of the day of Jack_Bauer,starting 00:00 to 23:59
 */
void jack_bauer(void);
/**
 *times_table prints the 9 times table, starting with 0.
 */
void times_table(void);
/**
 *add two integers and returns the result.
 */
int add(int, int);
/**
 *print_to_98 prints all natural numbers from n to 98
 *The first printed number the number passed to your function
 *The last printed number should be 98
 */
void print_to_98(int n);

#endif
