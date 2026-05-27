#include<stdio.h>

/*
	string handling in C
	- string is a sequence of characters terminated by null character '\0'
	- string is represented as array of characters in C
	- string is stored in contiguous memory locations
	- string can be initialized using character array or string literal
	- string can be manipulated using library functions defined in string.h header file

*/


int main()
{
	//                0   1   2   3
	char str1[4] = { 'A','B','C','D'};
	//               100 101 102 103
	char str2[] =  { 'a','b','c','d'};
	//               200 201  202 203

	int i;
	// print character of str1 using loop
	for(i=0 ; i < 4 ; i++)
	{
		printf("%c \n",str1[i]);
	}
	printf("\n");

	char str3[5] = { 'S','U','N', '\0'};
	// %s  -> to print string
	// \0  -> null char , we need to add at the end of string

	// Print str3 using %s format specifier.. %s -> is used to print string
	printf("str3 : %s  \n",str3);
    
	printf("size of str1 : %lu \n",sizeof(str1));// size of array is 4, so it will print

	printf("size of str2 : %lu \n",sizeof(str2));// // size of array is 4, so it will print 4

	printf("size of str3 : %lu \n",sizeof(str3)); // size of array is 5, so it will print 5

	char str4[] ="sunbeam"; //here complier add \0 at last position
	printf("size of str4 : %lu \n",sizeof(str4));// size of arry is 8, so it will print becz of null char \0 at the end of string

	return 0;
}
