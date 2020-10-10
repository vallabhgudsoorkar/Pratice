/*
Problem statement : 12.3
Write a program to find even factorial of given number. 

*/

#include <stdio.h>
int EvenFact(int iNo)
{
    int i=0;
    int iFact=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo;i++)
    {
        if(i%2==0)
        {
        iFact = iFact * i;
        }

    }

    return iFact;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Entre Number\n");
    scanf("%d",&iValue);

    iRet=EvenFact(iValue);

    printf("%d",iRet);
   
    return 0;
}
