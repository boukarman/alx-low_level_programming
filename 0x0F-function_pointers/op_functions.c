#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - sum of two int
  * @a: param
  * @b: param
  *
  * Return: int
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - difference between two int
  * @a: param
  * @b: param
  *
  * Return: int
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - product of two param
  * @a: param
  * @b: param
  *
  * Return: int
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - result of div
  * @a: param
  * @b: param
  *
  * Return: int
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - remionder of div
  * @a: param
  * @b: param
  *
  * Return: int
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
