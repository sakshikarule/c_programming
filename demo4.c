#include<stdio.h>

int main()
{
	//             0    1    2     3   4   -> index
	int arr[5] = { 10 , 20 , 30 , 40 , 50 };
	//            100  104   108  112  116 -> address

	// The array name 'arr' can be treated as a pointer to the first element of the array.
	// arr == &arr[0] == 100

	printf("arr = %lu &arr[0] = %lu \n",arr,&arr[0]);

	// arr => 100
	/*
		*arr => *(100) => 10
		*(arr + 0) =>*(100 + 0) => *(100) => 10    ==  arr[0]
		*(arr + 1) =>*(100 + 1) => *(104) => 20
		*(arr + 2) =>*(100 + 2) => *(108) => 30
		*(arr + 3) =>*(100 + 3) => *(112) => 40
		*(arr + 4) =>*(100 + 4) => *(116) => 50


		arr => (100)
		(arr + 0)  =>(100 + 0) => (100)     ==  &arr[0]
		(arr + 1)  =>(100 + 1) => (104)     ==  &arr[1]
		(arr + 2)  =>(100 + 2) => (108)     ==  &arr[2]
		(arr + 3)  =>(100 + 3) => (112)     ==  &arr[3]

	*/
    
	int i ;
	// print array element using pointer arithmentic
	for ( i = 0;  i< 5 ; i++)
	{
		printf("Enter the Index : " ,i);
		scanf("%d",(arr + i));
	}
	//print array elements using pointer arthimentic
	for( i= 0 ; i<5; i++)
	{
             	printf("*(arr + %d ) =%d \n",i,*(arr+i));
	}

	return 0 ;
}




