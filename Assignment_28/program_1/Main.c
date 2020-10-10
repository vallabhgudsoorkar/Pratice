/*
Problem statement : 28.1
Write a program which accept string from user and convert it into
lower case.
Input : “Marvellous Multi OS”
Output : marvellous multi os 

*/

#include<stdio.h>
void  StringLower(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        if((str[i]>=65)&&(str[i]<=90))
        {

            str[i]=str[i]+32;

         }

          printf("%c",str[i]);
     i++;

   
     }
    

}

int main()
{
    char ch[30];


    printf("Entre the Character\n");
    scanf("%[^'\n]s",ch);

    StringLower(ch);
   return 0;
}