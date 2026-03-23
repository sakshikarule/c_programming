#include<stdio.h>

//Declaration only (no memory allocated here)
extern int a;

// Definition (memory allocated here)
int a = 50;

int main()
{
	//Declaration only
	int num1;
	
	// Definition (memory allocated)
	int num2;

	// Declartion +Definition + Initialization
	int num3 = 10;

	//Assignment (after definition)
	num1 = 100;
	num2 = 200;

	printf("num1 = %d\n",num1);
	printf("num2 = %d\n",num2);
	printf("num3 = %d\n",num3);
	printf("a (global) = %\n",a);

	return 0;

}

