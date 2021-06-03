#include <stdio.h>
int main()
	{
	int factorial;

	 printf("Factorial of 1 to 5\n");

	for( int i=1; i<=5; i++)
		{
		factorial = 1;
		for (int j=1; j<=i; j++)
			{
			factorial *=j;
			}
		printf("factorial of %d :\t %d \n",i,factorial);
		}

	return 0;
	}
