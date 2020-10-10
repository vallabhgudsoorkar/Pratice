/*
Problem statement : 11.2
Write a program which accept range from user and display all even numbers in
between that range.

*/

#include <stdio.h>
 void DisplayRange(int iNo1,int iNo2)
{
   int i=0;
   

    for(i=iNo1;i<=iNo2;i++)
    {
            
        if(i%2==0)
        {
        printf("%d ",i);
        }
    }




}

int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Entre Two Numbers\n");
    scanf("%d",&iValue1);
    scanf("%d",&iValue2);
    if(iValue1>iValue2)
    {
        printf("Invalid Range");
    }
    else{
    DisplayRange(iValue1,iValue2);
    }
    
   
    return 0;
}
