/*
Problem statement : 13.4
Accept number from user and display below pattern.
Input : 4
Output : # 1 * # 2 * # 3 * # 4 *
*/

#include <stdio.h>
void Display(int iNo)
{
    int i=0;

    for(i=1;i<=iNo;i++)
    {   
        printf("#\t%d\t*\t",i);

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
