/*
Problem statement : 27.2
 Write a program which accept string from user and count number of
small characters.
Input : “Marvellous”
Output : 9 

*/


#include <stdio.h>
int smallCount (char str[])
{
    int iCnt=0;
    int i=0;
        while(str[i]!='\0')
    {
        if((str[i]>=97) && (str[i]<=122))
        {
            iCnt++;
        }
             i++;
    }
    return iCnt;


}

int main()
{
    char ch[30];
    int iRet=0;



    printf("Entre the String\n");
    scanf("%[^'\n']s",&ch);

    iRet = smallCount(ch);

    printf("COuntof Small Characters is : %d",iRet);
    return 0;
}