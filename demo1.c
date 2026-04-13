#include<stdio.h>
/*

	Logical Oprator
	 -Logical Opr output gets in True or False
	 - True =  1 [ Othere than 0 every value is true  ( +ve / -ve )]
	 - False = 0

	 - Logical AND => &&
		Truth Table
		A	&&  B   	Y
		0       0        0 False
		0       1        0 False
		1       0        0 False 
		1       1      True

		-If any one operand is False then output is False
		-If both operands are True then output is True
		-In Logical AND if 1st operand is False then 2nd operand is not checked
		Or
		- In Logical AND if 1st operand is True then 2nd operand is checked

*/
int main()
{
	int n1=0 , n2 = 0 , res ;
	res = n1 && n2 ;
	printf("%d  &&  %d  =   %d \n",n1,n2,res); //0
	n1=0,n2=10;
	res = n1 && n2 ;
	printf("%d  &&  %d  =   %d \n",n1,n2,res); //0

	n1=10,n2=0;
	res = n1 && n2 ;
	printf("%d  &&  %d  =   %d \n",n1,n2,res); //0

	n1=-10,n2=10;
	res = n1 && n2 ;
	printf("%d  &&  %d  =   %d \n",n1,n2,res); //1


	n1= 0 ,n2= 20;
	//---------------------->
	res = n1 && ++n2 ;
	//     0 &&  XXX
	//     F &&  XXX
	printf("%d  &&  %d  =   %d \n",n1,n2,res); //1
	//       0  && ++20     0
	//       0  &&  20  =   0



	n1= 10,n2= 0 ;
	res = n1 && ++n2 ;
	//    10 &&  ++0
	//    T  &&  1(T)   => True
	printf("%d  &&  %d  =   %d \n",n1,n2,res); //1
	//      10  &&  1   =    1


	n1= 10,n2= 0;
	res = n1 && n2++ ;
	//    10 && 0++
	//     T && 0
	//     T && F  => 0
	printf("%d  &&  %d  =   %d \n",n1,n2,res); //
	//      10  &&  1   = 0
	return 0 ;
}








