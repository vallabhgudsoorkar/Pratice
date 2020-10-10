/*
Problem statement : 16.5
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 4
Output : 
 1 2 3 4
 2 3 4 5
 3 4 5 6
 4 5 6 7
*/

#include <stdio.h>
void Display(int iNo1,int iNo2)
{
    int i=0,j=0;
    
    for(i=0;i<=iNo1;i++)
    {
        for(j=1;j<=iNo2;j++)
        {
          printf("%d\t",i+j);
            
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
