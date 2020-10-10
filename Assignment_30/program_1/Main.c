/*
Problem statement : 30.1
Write a program which accept string from user and copy the
contents of that string into another string. (Implement strcpy()
function)
Input : “Marvellous Multi OS”
Output : “Marvellous Multi OS” in another string 

*/

#include<stdio.h>
void  StringLower(char str[],char dstr[])
{
    int i=0;
    while(str[i]!='\0')
    {

        dstr[i]=str[i];


     i++;

   
     }
     dstr[i]='\0';
    
    printf("Copy of String is : %s",dstr);
}

int main()
{
    char ch[30];
    char bh[30];


    printf("Entre the Character\n");
    scanf("%[^'\n]s",ch);

    StringLower(ch,bh);
   return 0;
}