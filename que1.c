// find sum,difference,product,signed,unsignedchar,long,int

/*# include<stdio.h>

   int main()
{

    int num1, num2;

    printf("enter any two number");
    scanf("%d,%d", &num1,&num2);
   
    // calculation

    int sum = num1 + num2;
    int diff = num1 - num2;
    int prod = num1 * num2;

     printf("\n enter the sum= %d",sum);
     printf("\n enter the diff= %d",diff);
     printf("\n enter the prod= %d",prod);


     return 0;



} */



 /*#include<stdio.h>
 int main()
 {

    signed char num1,num2;

    printf("Enter any two number (signed char):");
    scanf("%hhd,%hhd",&num1,&num2);

    signed char  sum = num1 + num2;
    signed char diff = num1 - num2;
    signed char prod = num1 * num2;


    printf("\nSum = %hhd", sum);
    printf("\nDifference = %hhd", diff);
    printf("\nProduct = %hhd\n", prod);

    return 0;


 } */





 #include<stdio.h>
 int main()
 {

    unsigned char num1,num2;

    printf("Enter any two number (unsigned char):");
    scanf("%hhu,%hhu",&num1,&num2);

    unsigned char  sum = num1 + num2;
    unsigned char diff = num1 - num2;
    unsigned char prod = num1 * num2;


    printf("\nSum = %hhu", sum);
    printf("\nDifference = %hhu", diff);
    printf("\nProduct = %hhu", prod);

    return 0;


 }








