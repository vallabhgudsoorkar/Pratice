/*
Problem statement : 36.3
Write a program which 2 strings from user and check whether first
N contents of two strings are equal or not. (Implement strcmp()
function).
Note : If third parameter is greater than the size of second string then
concat whole string after first string.
Input : “Marvellous Infosystems”
 “Marvellous Logic Building”
 10
Output : TRUE 
*/


#include<stdio.h>
typedef int BOOL;
#define TRUE -1
#define FALSE -2

BOOL StrCmpN(char *str,char *dstr ,int iCnt)
{
    while((*str!='\0') && (*dstr!= '\0') && (iCnt!=0))
    {   
 
        str++;
        dstr++;
        iCnt--;

    }    
    if((*str==*dstr)|| (*dstr==*str))
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
    char ch[30];
    char br[30];
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Entre the 1st string\n");
    scanf("%[^'\n']s",ch);

    printf("Entre the 2nd string\n");
    scanf(" %[^'\n']s",br);
    
    printf("Entre the NUmber\n");
    scanf("%d",&iValue);

    bRet =StrCmpN(ch,br,iValue);

    if(bRet==TRUE)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not equal");
    }
    
   return 0;
}