/*
Problem statement : 14.4
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 4
Output : 
 * # * #
 * # * #
 * # * # 
*/

#include <stdio.h>
void Display(int iNo1,int iNo2)
{
    int i=0,j=0;
    for(i=1;i<=iNo1;i++)
    {
        for(j=1;j<=iNo2;j++)
        {
            if(j%2==0)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
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
