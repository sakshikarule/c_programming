#include<stdio.h>


int main()
{
	//unsigned char rang => 0 to 255
	unsigned char num1 = 255;
	printf("num1 = %u \n",num1); //255

	num1 =256;
	printf("num1 = %u \n",num1); //0

	num1 =257;
	printf("num1 =%u \n",num1); //1 (257 -256 => 1)
	                            //here 257 is overflow to 0

	num1 = 300;   //300 - 256 =>44
	printf("num1 = %u \n",num1); //44

}


