/*
Problem statement : 27.4
 Write a program which accept string from user and check whether
it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE 
*/

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL DiffCount(char str[])
{
    
    int i=0;
     while(str[i]!='\0')
    {
        if((str[i]=='A') || (str[i]=='E')|| (str[i]=='I')|| (str[i]=='O') || (str[i]=='U')|| (str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
        {
            return TRUE;
        }
       
        
        i++;
    }
    

}

int main()
{
    char ch[20];
    BOOL bRet=FALSE;

    printf("Entre the String\n");
    scanf("%[^'\n']s",&ch);

    bRet = DiffCount(ch);

    if(bRet==TRUE)
    {
        printf("It contains vowels in it");
    }
    else
    {
        printf("It does not Contains vowels in it");
    }
    
    
    return 0;
}