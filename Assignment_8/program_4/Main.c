/* Program : 8.4
Write a program which accept number from user and display its table. 

*/
#include<stdio.h>

void DisplayTable(int iNo)
{
    int i=0, iFact=1;
    for(i=1;i<=10;i++)
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
