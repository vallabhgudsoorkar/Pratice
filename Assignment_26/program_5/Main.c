/*
Problem statement : 26.5
Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.
Input : A
Output : Decimal 65
         Octal 0101
          Hexadecimal 0X41 
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
void DisplayChar(char ch)
{
    printf("Character is : %c\n",ch);
    printf("Decimal Value is : %d\n",ch);
    printf("Octal Value is : %o\n",ch);
    printf("Hexadeciamal Value is : %x\n",ch);
   
   

}
int main()
{
    
    char cValue='\0';
    printf("Entre Character\n");
    scanf("%c",&cValue);


    DisplayChar(cValue);

    
    
    
    return 0;
}
