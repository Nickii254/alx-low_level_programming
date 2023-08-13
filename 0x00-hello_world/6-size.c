#include <stdio.h>
/**
  *main - Entry point 
  *Return: always 0 (success)
  */
int main(void)
{
	printf("Size of a char: 1byte(s)",sizeof(char));
        printf("Size of an int: 4byte(s)",sizeof(int));
        printf("Size of a long int: 4byte(s)",sizeof(long int));
        printf("Size of a long long int: 8byte(s)",sizeof(long long int));
	printf("Size of a float: 4byte(s)",sizeof(float));
	return (0);
}
