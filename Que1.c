 //display division of the two numbers
 
 
 
 #include<stdio.h>
int main()
{
    int num1,num2;
    int res;

    printf("enter the value of num1, num2");
    scanf("%d%d",&num1,&num2);
    if(num2 == 0)
    {
        printf("divisable by zero error");

    }
   else
    {

        res= num1/num2;
        printf("%d",res);

    }

    return 0;
}