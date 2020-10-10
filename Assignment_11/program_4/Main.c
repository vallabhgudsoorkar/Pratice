/*
Problem statement : 11.3
Write a program which accept range from user and return addition of all even
numbers in between that range. (Range should contains positive numbers only) 

*/

#include <stdio.h>
 int  DisplaySumRange(int iNo1,int iNo2)
{
   int i=0;
   int iSum=0;

    for(i=iNo1;i<=iNo2;i++)
    {
        if(i%2==0)
        {
         iSum=iSum + i;
        }     
    }

    return iSum;


}

int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;

    printf("Entre Two Numbers\n");
    scanf("%d",&iValue1);
    scanf("%d",&iValue2);
    if((iValue1>iValue2) || (iValue1<0))
    {
        printf("Invalid Range");
      
    }
    else{
    iRet=DisplaySumRange(iValue1,iValue2);
    }
    
   printf("%d",iRet);
    return 0;
}
