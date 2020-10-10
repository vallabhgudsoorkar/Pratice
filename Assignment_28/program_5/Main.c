/*
Problem statement : 28.5
  Write a program which accept string from user and count number of
white spaces
Input : “MarvellouS”
Output : 0
Input : “MarvellouS Infosystems”
Output : 1
Input : “MarvellouS Infosystems by Piyush Manohar Khairnnar”
Output : 5 
*/

#include<stdio.h>
int  DisplayWhiteSpace(char str[])
{
    
    int i=0;
    int iCnt=0;
    
    for(i=0;str[i]!=0;i++)
    {  
        if(str[i]==32) 
        {
         iCnt++;
        }
      
        
       
    }  
    return iCnt;
}


int main()
{
    char ch[30];
    int iRet=0;
    printf("Entre the string\n");
    scanf("%[^'\n']s",ch);

    iRet = DisplayWhiteSpace(ch);

    printf("%d",iRet);



    return 0;
}

