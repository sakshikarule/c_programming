#include<stdio.h>

/*
	char str1[20] = "ABC" ; 
		- memory allocated for 20 characters on stack
		- so str1 is modifiable( read/write )

	char *str2 = "abc";     //  Read Only
		- memory allocated in read only section of memory
		- so str2 is non-modifiable (read only)
		- trying to modify str2 will cause runtime error
*/

int main()
{
	char str1[20] = "ABC" ; // Memory allocated on stack, so str1 is modifiable (read/write)
	char *str2 = "abc";     // Memory allocated in read-only section, so str2 is non-modifiable (read-only)

	str1[1] = 'X'; // OK
	printf("str1 : %s \n",str1);// AXC

	str2[2] = 'x';// Error- runtime error
	printf("str2 : %s \n",str2);



	return 0;
}
