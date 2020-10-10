/*
Problem statement : 26.4
Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE 
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL DisplayChar(char ch)
{
    
    if((ch>=33) && (ch<=47) || (ch==64)|| (ch==94))
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
    BOOL bRet=FALSE;
    char cValue='\0';
    printf("Entre Character\n");
    scanf("%c",&cValue);


    bRet=DisplayChar(cValue);

    if(bRet==TRUE)
    {
        printf("It is a Special Character");
    }
    else
    {
        printf("It is Not a Special Character");
    }
    
    
    return 0;
}
