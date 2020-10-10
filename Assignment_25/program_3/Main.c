/*
Problem statement : 25.3
  Accept Character from user and check whether it is digit or not
(0-9).
Input : 7
Output : TRUE
Input : d
Output : FALSE 
*/


#include <stdio.h>
#include<stdlib.h>

#define TRUE  1
#define FALSE 0
typedef int BOOL;

BOOL  ChkChar(char cChk)
{
    if((cChk>=32) &&(cChk<=47)||(cChk>=58)&&(cChk<=127) )
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
        printf("It is not a Digit");
    }
    else
    {
        printf("It is Digit");
    }
    




    return 0;
}



