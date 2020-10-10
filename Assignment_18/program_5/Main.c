/*
Problem statement : 18.5
 Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output :
. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : 1 2 3 4
           2 3 4
             3 4
               4 
*/

#include <stdio.h>
void Display(int iNo1,int iNo2)
{
    int i=0,j=0,k=0;
    
    for(i=1;i<=iNo1;i++)
    {
        for(k=1;k<i;k++)
        {
            printf(" \t");
        }
        for(j=i;j<=iNo2;j++)
        {
           
            
          printf("%d\t",j);
          
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
