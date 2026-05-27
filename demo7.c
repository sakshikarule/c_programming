#include<stdio.h>
/*
	Input functions for strings
	1. scanf()
	2. gets()  - deprecated function, not recommended to use
	3. fgets()

	Note:
		- When we use scanf() to read string, it reads input until first whitespace character is found.
		  So it cannot read string with spaces.

		- To read string with spaces we can use either gets() or fgets() function.


*/


int main()
{
	char str1[20];
	printf("enter the  string : ");
	//scanf("%s",str1);
	//gets(str1); // deprecated function, not recommended to use

	//scanf("%[^\n]s",str1); // scan until newline character is found, so it can read string with spaces

	//scanf("%[^.]s",str1);  // scan until dot character is found, so it can read string with spaces and other characters except dot (.)
	//scanf("%[A-Z]s",str1); // scan only uppercase letter means A - Z
	//scanf("%[a-z]s",str1); // scan only lowercase letter means a - z

	scanf("%[^A-Z]s",str1); //  scan all letter excluding uppercase letter A-Z
	scanf("%[^a-z]s",str1); // scan all letter excluding lowercase letter a-z
	printf("str1 : %s \n",str1);
	//puts(str1); // puts() is used to print string on console, it automatically adds new line after printing string


	return 0;
}
