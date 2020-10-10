/*
Problem statement : 15.3
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 3 iCol = 5
Output : 
 A A A A A
 B B B B B
 C C C C C
*/

#include <stdio.h>
void Display(int iNo1,int iNo2)
{
    int i=0,j=0;
    int Ass=64;
    for(i=1;i<=iNo1;i++)
    {
        for(j=1;j<=iNo2;j++)
        {
            printf("%c\t",Ass+j);
            
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
