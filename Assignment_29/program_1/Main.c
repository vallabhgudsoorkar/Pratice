/*
Problem statement : 29.1
Write a program which accept string from user and accept one
character. Check whether that character is present in string or not.
Input : “Marvellous Multi OS”
 e
Output : TRUE
Input : “Marvellous Multi OS”
 W
Output : FALSE 

*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL StringChk(char str[],char cChk)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]==cChk)
        {
           
            return TRUE;

         }
        
         

      i++;
   
     }
    

}

int main()
{
    char ch[30];
    char cValue = '\0';
    BOOL bRet=FALSE;


    printf("Entre the Character\n");
    scanf("%[^'\n]s",ch);

    printf("Entre the Character\n");
    scanf(" %c",&cValue);


    bRet=StringChk(ch,cValue);
    if(bRet==TRUE)
    {
        printf("Character is Present in the string\n");
    }
    else
    {
        printf("Character is not  Present in the string\n");
    }
    

   return 0;
}