/*
Problem statement : 11.1
Write a program which accept range from user and display all numbers in between
that range. . 

*/

#include <stdio.h>
 void DisplayRange(int iNo1,int iNo2)
{
   int i=0;

    for(i=iNo1;i<=iNo2;i++)
    {
        printf("%d ",i);
    }




}

int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Entre Two Numbers\n");
    scanf("%d",&iValue1);
    scanf("%d",&iValue2);

    DisplayRange(iValue1,iValue2);

    
   
    return 0;
}
