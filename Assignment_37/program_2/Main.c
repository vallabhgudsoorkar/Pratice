/*
Problem statement : 37.2
  Write a program which accept string from user and return length of
largest word.
Input : “Marvellous Multi OS Infosystems”
Output : 11 
*/
#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0
BOOL StrCmp(char *str,char *dstr)
{
    
    while((*str!= '\0') && (*dstr!= '\0'))
    {

    

        str++;
        dstr++;

    }
    if((*str==*dstr ) || (*dstr==*str))
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
    char arr[30];
    char brr[30];
    int iSize =0;
    BOOL bRet = FALSE; 

    printf("Entre the string\n");
    scanf("%[^'\n']s",arr);

    printf("Entre the Size\n");
    scanf(" %[^'\n']s",brr);

    bRet=StrCmp(arr,brr);

    if(bRet==TRUE)
    {
        printf("Both Strings are Equal ");
    }
   else
   {
       printf("Strings are not equal");
   }
   

    return 0;
}