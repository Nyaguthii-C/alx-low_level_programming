#include <stdio.h>
#include "main.h"
#include<stdlib.h>
/**
* cops_add - returns the sum of integers a and b
* @a: integer a
* @b: integer b
* Return: adition of a and b
*/
int cop_add(int a, int b)
{
	return (a + b);
}
/**
* cops_sub - returns subtraction of integer b from a
* @a: integer numerator
* @b: integer denominator
* Return: value after subtracting  from a
*/
int cop_sub(int a, int b)
{
	return (a - b);
}
/**
* cops_mul - returns subtraction of integer b from a cops_sub
* @a: integer a
* @b: integer b
* Return: value after mul
*/
int cop_mul(int a, int b)
{
	return (a * b);
}
/**
* cops_div - returns the quotient of a dividision of a and b
* @a: integer a
* @b: integer b
* Return: division of a by b
*/
int cop_div(int a, int b)
{
	return (a / b);
}
/**
* cops_mod - returns the modulo of a divide by b
* @a: int a
* @b: int b
* Return: modulus of a and b
*/
int cop_mod(int a, int b)
{
	return (a % b);
}
