#include <stdio.h>
/**
* main - a program that print the sizes
* Return: 0
*/
int main(void)
{
int a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %lu bytes(s)\n", (unsigned long) sizeofof(a));
printf("Size of an int: %lu bytes(s)\n", (unsigned long) sizeofof(b));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long) sizeofof(c));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long) sizeofof(d));
printf("Size of a float: %lu bytes(s)\n", (unsigned long) sizeofof(f));
return (0);
}
