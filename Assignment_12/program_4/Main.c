/*
Problem statement : 12.4
Write a program which returns odd factorial
of given number. . 

*/

#include <stdio.h>
int FactOdd(int iNo)
{
    int i=0;
    
    int iOFact=1;

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
         
        
    }

    return iOFact;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Entre Number\n");
    scanf("%d",&iValue);

    iRet=FactOdd(iValue);

    printf("%d",iRet);
   
    return 0;
}
