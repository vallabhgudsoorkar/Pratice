/*
Problem statement : 27.3
Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.
Input : “MarvellouS”
Output : 6 (8-2) 
*/


#include <stdio.h>
int DiffCount (char str[])
{
    int iCnt=0;
    int isCnt=0;
    int i=0;
        while(str[i]!='\0')
    {
        if((str[i]>=97) && (str[i]<=122))
        {
            isCnt++;
        }
        if((str[i]>=65) && (str[i]<=90))
        {
            iCnt++;
        }
             i++;
    }
    return (isCnt - iCnt);


}

int main()
{
    char ch[30];
    int iRet=0;



    printf("Entre the String\n");
    scanf("%[^'\n']s",&ch);

    iRet = DiffCount(ch);

    printf("COuntof Small Characters is : %d",iRet);
    return 0;
}