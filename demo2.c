#include<stdio.h>
/*
   Datatypes:
	- Builtin
		- primary datatypes
			- int        =>%d  =>Size 4 Byte


	printf() - library function to print on console
		syntax:
			printf("format string", arg1, arg2, ...);
		format string - string containing text to be printed and format specifiers
		format specifiers - placeholders for variables to be printed
			%d  - for integer
			%c  - for character
			%f  - for float
			%lf - for double

			%d => decimal
			%o => Ocatal
			%x => Hexadecimal
*/

int main()
{
	int num1 = 65;
	printf("Decimal : %d \n",num1); //65
	printf("octal  :  %o  \n",num1); //101
    printf("Hexadecimal : %x ",num1); //41

	// octal and hexadecimal number start with 0 => octal number

	int num2=0101; //if anu number start with 0 => octal number
	printf("num : %o \n",num2); //101
	printf("num : %d \n",num2); //65
	printf("num : %x \n",num2); //41

	int num3 =0x41; //if any number start 0x => hexadecimal number
	printf("num3 : %x \n",num3); //41
	printf("num3 : %d \n",num3); //65
	printf("num3 : %o \n",num3); //101

	return 0;

}
