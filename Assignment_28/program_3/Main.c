/*
Problem statement : 28.3
 Write a program which accept string from user and toggle the case.
Input : “Marvellous Multi OS”
Output : mARVELLOUS mULTI os  
*/


#include<stdio.h>

void DisplayToggle(char str[])
{
    
    int i=0;
    
    for(i=0;str[i]!=0;i++)
    {  
        if((str[i]>=97) && (str[i]<=122))
        {
         str[i]=str[i]-32;
        }
        else if((str[i]>=65) && (str[i]<=90))
        {
            str[i]=str[i]+32;
        }
        
        printf("%c",str[i]);
    }  




}


int main()
{
    char ch[30];
    printf("Entre the string\n");
    scanf("%[^'\n']s",ch);

    DisplayToggle(ch);





    return 0;
}