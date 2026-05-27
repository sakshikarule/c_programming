#include<stdio.h>
/*
    Function Declarations (Prototypes)

    accept_arr()  : Accepts elements from user and stores them in array
    print_arr()   : Prints all elements of the array
    rev_arr()     : Reverses the array elements
*/


void accept_arr( int arr[]  , int size );
void print_arr(int arr[] , int size);
void rev_arr(int arr[] , int size);

int main()
{
	int arr[5]; //// array declaration (5 integers) - elements contain garbage values initially

	
	printf("size of arr : %lu \n",sizeof(arr));// prints total size of array in bytes (5 * 4 = 20 bytes on most systems)
	accept_arr( arr , 5 ); // pass array to function to accept values from user



	printf("Before rev : \n");
	print_arr(arr , 5); //printf array before reversing

	rev_arr(arr , 5); //revere array element
        
	printf("After rev \n");
	print_arr(arr , 5); //print arry after reversing

	return 0;
}

//---------------------------------------------------------------------------
/*
    Function : rev_arr()

    Purpose :
    Reverse the elements of the array.

    Logic :
    Swap first element with last element,
    second element with second last element, and so on.

    Example
    Before : 1 2 3 4 5
    After  : 5 4 3 2 1
*/

void rev_arr(int arr[] , int size)
{
	int i =0 , j = size -1; //initialize two index variables

	while ( i< j) // continue until both index variables
	{
		int temp = arr[i]; // store the first element in temp
		arr[i]   = arr[j]; //copy last element to first
		arr[j]   = temp;   // copy temp to last

		i++,j--; //move forward from start and backward from end
	}
}
//---------------------------------------------------------------
//               int *arr
/*
    Function : accept_arr()

    Purpose :
    Accept array elements from user.

    Important Concept :
    When array is passed to a function, it decays into a pointer.

    Therefore:
    arr[]  ==  int *arr

    sizeof(arr) inside function will give size of pointer
    NOT the size of entire array.
*/




void accept_arr( int arr[] , int size  )
{

	printf("size of arr : %lu \n",sizeof(arr));// prints size of pointer (8 bytes on 64-bit system)

	int i;
	for(i = 0 ; i < size ; i++)
	{
		printf("Enter %dth index value : ",i);
		scanf("%d",&arr[i]); // store value in array
	}
}


//---------------------------------------------------------------------------
 void print_arr(int arr[] , int size)
{
	int i;
	for( i = 0 ; i< size ; i++)
	{
		printf("arr[%d] = %d \n",i,arr[i]);
	}
}

//---------------------------------------------------------------
/*Alternative version of print_arr()

Purpose :
Print array in reverse order.

Example:
Array : 10 20 30 40

Output:
arr[3] = 40
arr[2] = 30
arr[1] = 20
arr[0] = 10
*/

/*
void print_arr(int arr[] , int size)
{
	// Print array in reverse order
	int i;
	for( i = size-1 ; i >= 0 ; i-- )
	{
		printf("arr[%d] = %d \n",i,arr[i]);
	}

}
*/
//---------------------------------------------------------------
