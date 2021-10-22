#include <stdio.h>

/**
 *main - work for the body
 *Return: returns the fizz buzz
 *
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		if (i %5 == 0)
			printf("Bizz");
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		printf("%d ",i);
	}
	return (0);
}
