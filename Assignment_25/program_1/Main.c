/*
Problem statement : 25.1
 1. Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE 

*/

#include <stdio.h>


#define TRUE  1
#define FALSE 0
typedef int BOOL;

BOOL  ChkChar(char cChk)
{
    if((cChk>=65) && (cChk<=90)||(cChk>=97) &&(cChk<=122) )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}

   int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    char cValue='\0';

    printf("Entre the character\n");
    scanf("%c",&cValue);

    bRet=ChkChar(cValue);

    if(bRet==TRUE)
    {
        printf("It is a Character");
    }
    else
    {
        printf("It is not a Character");
    }
    




    return 0;
}

