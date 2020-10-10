/*
Problem statement : 28.2
 Write a program which accept string from user and copy the
contents of that string into another string. (Implement strncpy()
function)
Input : “Marvellous Multi OS”
 10
Output : “Marvellous
Note : If third parameter is greater than the size of source string then
copy whole string into destination. 

*/
#include<stdio.h>
void StrNcpy(char *str,char *dstr,int iSize)
{
    
    int i=0;
    
    for(i=0;*str!=0,i<=iSize;i++)
    {  
       *dstr=*str;

       str++;
       dstr++;

    }

  



}


int main()
{
    char ch[30];
    char brr[30];
    int iSize=0;
    printf("Entre the string\n");
    scanf("%[^'\n']s",ch);

    printf("Entre the Size\n");
    scanf("%d",&iSize);

    StrNcpy(ch,brr,iSize);


    printf("%s",brr);


    return 0;
}