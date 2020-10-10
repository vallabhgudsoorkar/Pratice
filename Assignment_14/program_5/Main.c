/*
Problem statement : 14.5
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 4
Output : 
 1 1 1 1
 2 2 2 2
 3 3 3 3
 4 4 4 4 

*/

#include <stdio.h>
void Display(int iNo1,int iNo2)
{
    int i=0,j=0;
    for(i=1;i<=iNo1;i++)
    {
        for(j=1;j<=iNo2;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }    
}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Entre Number\n");
    scanf("%d%d",&iValue1,&iValue2);

    Display(iValue1,iValue2);
   
    return 0;
}
