/* Program : 8.5
 Write a program which accept number from user and display its table in reverse
order. 

*/
#include<stdio.h>

void DisplayTable(int iNo)
{
    int i=0, iFact=1;
    for(i=10;i>=1;i--)
    {
        iFact=iNo*i;
        printf(" %d ",iFact);
    }
    
}
int main()
{
    int iValue=0;
    printf("Entre Number\n");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    

    return 0;
}
