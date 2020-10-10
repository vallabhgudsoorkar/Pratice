/* Program : 8.3
Write a program to find factorial of given number

*/
#include<stdio.h>

int Factorial(int iNo)
{
    int i=0, iFact=1;
    for(i=1;i<=iNo;i++)
    {
        iFact=iFact*i;
    }
    return iFact;
}
int main()
{
    int iValue=0, iRet=0;
    printf("Entre Number\n");
    scanf("%d",&iValue);

    iRet= Factorial(iValue);

    printf("%d",iRet);

    return 0;
}
