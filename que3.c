//check whether number is -ve or +ve


#include<stdio.h>
int main()
{

int num;
printf("enter the number:");
scanf("%d", &num);

if(num > 0)
{
    printf("%d the number is positive\n",num);
}
else if (num < 0)
{
    printf("%d the number is negative\n",num);
}
  else{
    printf("the number is zero\n");
}
 return 0;
}



