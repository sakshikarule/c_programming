#include<stdio.h>
/*
	Arrays and pointers are closely related in C.
	- An array name can be treated as a pointer to the first element of the array.
	- When we pass an array to a function, we are actually passing a pointer to the first element of the array.
	- We can use pointer arithmetic to access elements of the array.
*/

void accept_arr( int *ptr , int size );
void print_arr(int *ptr , int size);
int main()
{
	//double arr[5]
	int arr[5]  ;
	accept_arr( arr , 5 );
	print_arr(arr , 5);


	return 0;
}

// Function to accept array elements from user
void print_arr(int *ptr , int size)
{
	int i;
	for(i=0 ;  i< size; i++)
	{
		printf(" *(ptr + %d ) = %d \n",i , *(ptr+i)); // using pointer arithmetic to access array elements
		//                                  *(ptr + i) -> value at i th index of array
	}
}

// Function to print array elements
void accept_arr( int *ptr , int size )
{
	int i ;
	for(i = 0 ; i < size ; i++)
	{
		printf("Enter %d th Index : ",i);
		scanf("%d",(ptr + i )); //using pointer arithmetic to access array elements
				 // ptr + i  -> address of i th index of array
	}

}
