/*
Problem statement : 12.2
Accept amount in US dollar and return its corresponding value in Indian currency.
Consider 1$ as 70 rupees. . 

*/

#include <stdio.h>
int DollarTOINR(int iNo)
{
    int iConvert=70;

    iConvert = iConvert * iNo;

    return iConvert;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Entre Amount in US Dollar\n");
    scanf("%d",&iValue);

    iRet=DollarTOINR(iValue);

    printf("%d",iRet);
   
    return 0;
}
