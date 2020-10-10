/*
Problem statement : 15.5
 Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 3 iCol = 4
Output : 
 1 2 3 4
 5 6 7 8
 9 10 11 12 
*/

#include <stdio.h>
void Display(int iNo1,int iNo2)
{
    int i=0,j=0,sum=0;
   
    for(i=1;i<=iNo1;i++)
    {
        for(j=1;j<=iNo2;j++)
        {
            sum=sum+1;
            printf("%d\t",sum);
            
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
