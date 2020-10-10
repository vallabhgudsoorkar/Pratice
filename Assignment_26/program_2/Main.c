/*
Problem statement : 26.2
 Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.
Input : Q
Output : q
Input : m
Output : M
Input : 4
Output : 4

Input : %
Output : % 
*/


#include <stdio.h>

void DisplayCapital(char ch)
{
    if((ch>=97)&&(ch<=122))
    {
        printf("Capital is : %c",ch-32);
    }
    else if ((ch>=65) && (ch<=90))
    {
        printf("Small is : %c",ch+32);
    }
    else
    {
        printf("Entred Character is : %c",ch);
    }
    




}


int main()
{   
    char cValue='\0';
    
    printf("Entre the Character\n");
    scanf("%c",&cValue);

    DisplayCapital(cValue);

    return 0;
}
