// char, hex, octal, decimal


#include<stdio.h>
int main()
{
    int num1 = 600;   // decimal
    int num2 = 'B';   // char
    int num3 = 0500;   // octal
    int num4 = 0x500;  // hex

   printf("Enter the num1 in decimal format =%d\n", num1);
   printf("Enter the num1 in character format =%ch\n", num1);
   printf("Enter the num1 in octal format =%o\n", num1);
   printf("Enter the num1 in hex format =%x\n", num1); 


   return 0;

 


}