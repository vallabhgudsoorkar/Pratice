/*
Problem statement : 28.2
 Write a program which accept string from user and convert it into
upper case.
Input : “Marvellous Multi OS”
Output : MARVELLOUS MULTI OS  

*/
#include<stdio.h>
void DisplayCapital(char str[])
{
    
    int i=0;
    
    for(i=0;str[i]!=0;i++)
    {  
        if((str[i]>=97) && (str[i]<=122))
        {
         str[i]=str[i]-32;
        }
        printf("%c",str[i]);
    }  




}


int main()
{
    char ch[30];
    printf("Entre the string\n");
    scanf("%[^'\n']s",ch);

    DisplayCapital(ch);





    return 0;
}