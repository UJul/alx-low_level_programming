#include "main.h"

/**
  *add - Prints text
  *@int: print int
  *Return: Always 0.
 */
int add(int, int);
{
int number1, number2, sum;
printf("Enter two integers: ");
scanf("%d %d", &number1, &number2);
sum = number1 + number2;
printf("%d + %d = %d", number1, number2, sum);
return (0);
}
