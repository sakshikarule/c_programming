#include<stdio.h>

/*
   Declare varibale
		syntax :<data type> <identifier>

	Identifier Rules
	1. It should start with an alphabet (A-Z or a-z) or underscore(_)
	2. It can be followed by any number of alphabets (A-Z or a-z), digits(0-9) or underscore(_)
	3. It cannot be a keyword(reserved word)
	4. It is case sensitive

*/
int main()
{
	int  num1; //valid
	int _num1; //valid
	int  num1;// not valid (redeclartion not allowed)
	int  Num1; // valid( case sensitive)

	//int 1num1; //not valid (cannot start with digit)
	//int basic salery ; // not vaild (space not allowed)

	// int !!num1; //error 
	//int $num1;//error
//	int !num = 50; //eror
	// int $num =60;//error
	// int 1a; //error
	//int !a; //error
	// int @a; //error
	// int $a; //error

	int num1_num; //valid
	//int num 1 ; //space not allowed

	return 0;
}
