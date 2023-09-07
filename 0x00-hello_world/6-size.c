#include <stdio.h>
/**
 * main - A program that print the size of the various types of computers it compiles and runs on
 * Return: 0 (succes)
 */
int main(void)
{
printf("Size of a char: %1a byte(s)\n", (unsigned long)sizeof(char));
printf("Size of a int: %1a byte(s)\n", (unsigned long)sizeof(long int);
printf("Size of a long int: %1a byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long long int: %1a byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %1a byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
