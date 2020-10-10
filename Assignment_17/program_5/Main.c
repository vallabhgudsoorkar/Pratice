/*
Problem statement : 17.5
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4 
Output : 
 1 2 3 4
 1 * * 4
 1 * * 4
 1 2 3 4 
*/

#include <stdio.h>
void Display(int iNo1,int iNo2)
{
    int i=0,j=0;
    
    for(i=1;i<=iNo1;i++)
    {
        for(j=1;j<=iNo2;j++)
        {
            if( (i!=1) && (i!=iNo1) && (j!=1) && (j!=iNo2))
            {
                printf("*\t");
            }
            else
            {
                printf("%d\t",j);
            }
            
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
