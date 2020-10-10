/*
Problem statement : 27.1
Write a program which accept string from user and count number of
capital characters.
Input : “Marvellous Multi OS”
Output : 4 

*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
int  DisplayCount(char *str)
{
    int i=0;
    int iCnt=0;
  while(*str!='\0')
  {
      if((*str>=65) && (*str<=90))
    {
        iCnt++;
    }

    str++;
  }
    return iCnt;
}
int main()
{
    char ch[30];
    int  iRet=0;
    char cValue='\0';
    printf("Entre String\n");  

    scanf("%[^'\n']s",ch);

    printf("your Entred String is %s\n",ch);


   iRet = DisplayCount(ch);
    
   printf("Number of Capital Character is : %d",iRet);

   

    
    
    
    return 0;
}
