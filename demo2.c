#include<stdio.h>
/*
	Logical Oprator
	-Logical Opr output gets in True or False
	- True =  1 [ Othere than 0 every value is true  ( +ve / -ve )]
	- False = 0

	- Logical OR  => ||
		A  ||  B       Y
		0      0       0 False
		0      1       1 True
		1      0       1 True
		1      1       1 True
		- In Logical OR if 1st operand is True then 2nd operand is not checked
		Or
		- In Logical OR if 1st operand is False then 2nd operand is checked


*/
int main()
{
	int n1=0 ,n2=0,res;

  	res=  n1 || n2;
	printf("%d || %d = %d \n",n1,n2,res); //0

	n1= 0, n2 = 10;
	res= n1 || n2;
	printf("%d || %d = %d \n",n1,n2,res); //1

	
	n1= 10, n2 = 0;
	res= n1 || n2;
	printf("%d  || %d = %d \n",n1,n2,res); // 1

	n1= 20, n2 = 10;
	res= n1 || n2 ;
	printf("%d  || %d = %d \n",n1,n2,res); // 1




    n1= 0 , n2 = 10;
	res= n1-- || ++n2;
	//   0--  || ++10
	//   0(F) || 11(T)  => true

	printf("%d  || %d = %d \n",n1,n2,res); // 1




	n1= 1 , n2 = 0;
	res= n1 || ++n2 ;
	//   1  || ++0
	//   t  || XXX
	//   T  ---------------> True
	printf("%d  || %d = %d \n",n1,n2,res); // 1
	//      1       0    1

	n1= 1 , n2 = 0;
	res= -- n1 || ++n2 ;
	//   0 || ++0
	//   f  || 1(T)
	//   f  ||  t  ------------> True
	printf("%d  || %d = %d \n",n1,n2,res); // 1
    //       0  || 1 => 1



	return 0;
}

