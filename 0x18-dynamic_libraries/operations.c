#include "main.h"

/**
 * add - A function that returns the addition of two numbers.
 * @a: First number
 * @b: second number to be added
 * Return: addition of two integers.
 */
int add(int a, int b)
{
	return (a + b);
}


/**
 * subt - A function that returns the difference of two numbers.
 * @a: First number
 * @b: second number
 * Return: the subtraction result
 */
int sub(int a, int b)
{
	return (a - b);
}


/**
 * mul - A function that returns the product of two numbers.
 * @a: First number to be multiplied
 * @b: second number to be multiplied
 * Return: the product of multiplication of two numbers
 */
int mul(int a, int b)
{
	return (a * b);
}


/**
 * div - A function that returns the division value of two numbers
 * @a: First number
 * @b: second number
 * Return: division value
 */
div_t divi(int a, int b)
{
	div_t result = div(a, b);

	return (result);
}

/**
 * mod - A function that returns the modulus of two numbers
 * @a: First number
 * @b: second number
 * Return: mod value
 */
int mod(int a, int b)
{
	return (a % b);
}
