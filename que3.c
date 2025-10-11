// print the ASCII vaule of user entered char in decimal,hex,octal format and also print the char for user entered ASCII value


#include<stdio.h>
int main()
{

    char ch;
    printf("Enter character");
    scanf("%c",&ch);

    printf("Enter the ASCII vaule in decimal=%d\n",ch);
    printf("character in hex format=%x\n",ch);
    printf("character in octal format=%o\n",ch);

    return 0;

}