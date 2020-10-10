/*
Problem statement : 15.1
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : 
 A B C D
 A B C D
 A B C D
 A B C D 
*/

#include <stdio.h>
void Display(int iNo1,int iNo2)
{
    int i=0,j=0;
    int Ass=65;
    for(i=0;i<iNo1;i++)
    {
        for(j=0;j<iNo2;j++)
        {
            printf("%c\t",Ass+i);
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
