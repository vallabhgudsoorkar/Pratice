/*
Problem statement : 14.1
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 3
Output : 
 * * *
 * * *
 * * *
 * * * 
*/

#include <stdio.h>
void Display(int iNo1,int iNo2)
{
    int i=0,j=0;
    for(i=0;i<iNo1;i++)
    {
        for(j=0;j<iNo2;j++)
        {
            printf("*\t");
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
