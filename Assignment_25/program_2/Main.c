/*
Problem statement : 25.2
 Accept Character from user and check whether it is capital or not
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE 

*/

#include <stdio.h>


#define TRUE  1
#define FALSE 0
typedef int BOOL;

BOOL  ChkChar(char cChk)
{
    if((cChk>=65) && (cChk<=90) )
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
        printf("It is a Capital Character");
    }
    else
    {
        printf("It is not a Capital Character");
    }
    




    return 0;
}

