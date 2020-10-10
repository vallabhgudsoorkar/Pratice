/*
Problem statement : 12.5
Write a program which returns difference between Even factorial and odd factorial
of given number. . 

*/

#include <stdio.h>
int FactDiff(int iNo)
{
    int i=0;
    int iEFact=1;
    int iOFact=1;
    int iSum=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo;i++)
    {
        if(i%2!=0)
        {
            iOFact = iOFact * i;
        }
         if(i%2==0)
        {
             iEFact= iEFact * i;
        }
        
    }
    iSum = iEFact - iOFact;
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Entre Number\n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("%d",iRet);
   
    return 0;
}
