/*
Problem statement : 16.3
 Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 5 iCol = 5
Output : 
 a b c d e
 1 2 3 4 5
 a b c d e
 1 2 3 4 5
 a b c d e 
*/

#include <stdio.h>
void Display(int iNo1,int iNo2)
{
    int i=0,j=0;
    int Ass=96;
    for(i=1;i<=iNo1;i++)
    {
        for(j=1;j<=iNo2;j++)
        {
            if(i%2==0)
            {
                 printf("%d\t",j*2-1);
            }
            else
            {
                 printf("%c\t",Ass+j);
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
