/*
    Program : 47.1
   Write a recursive program which accept string from user and count white
spaces.
Input : HE llo WOr lD
Output : 3 

*/
#include<stdio.h>

int  Display(char *str)
{   
    static int iCnt = 0;
    char ch = ' ';
    if(*str != '\0')
   { 
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
        Display(str);
    
   }
    return iCnt;



}

int main()
{
    char arr[30];
    int iRet = 0;

    printf("Entre the string \n");
    scanf("%[^'\n']s",arr);

    iRet = Display(arr);

    printf("%d",iRet);



    return 0;
}
