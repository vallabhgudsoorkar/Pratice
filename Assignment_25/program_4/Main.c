/*
Problem statement : 25.4
Accept Character from user and check whether it is small case or
not (a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE 

*/

#include <stdio.h>

#define TRUE  1
#define FALSE 0
typedef int BOOL;

BOOL  ChkChar(char cChk)
{
    if((cChk>=97)&&(cChk<=122) )
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
        printf("It is Small Case");
    }
    else
    {
        printf("It is Not a Small Case");
    }
    




    return 0;
}





