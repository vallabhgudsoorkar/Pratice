/*
Problem statement : 24.1
  Accept N numbers from user and return the largest number.
Input : N : 6
 Elements : 85 66 3 66 93 88
Output : 93

*/

#include <stdio.h> 

void DisplayASCII()
{
    int i=0;
    char ch='\0';

    for(i=0;i<=255;i++)
    {
        printf("Decimal value is: %d\n",i);
        printf("Octal value is: %o\n",i);
        printf("Hexadecimal value is (Alphabet in capital letters): %X\n",i);
        printf("%c\n",ch);
        ch++;



    }







}

int main()
{
    DisplayASCII();
    return 0;
}