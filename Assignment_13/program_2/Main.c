/*
Problem statement : 13.2
Accept number from user and display below pattern.
Input : 5
Output : 5 # 4 # 3 # 2 # 1 # 
*/

#include <stdio.h>
void Display(int iNo)
{
    int i=0;

    for(i=iNo;i>0;i--)
    {   
        printf("%d\t#\t",i);

    }
}

int main()
{
    int iValue=0;

    printf("Entre Number");
    scanf("%d",&iValue);

    Display(iValue);
   
    return 0;
}
