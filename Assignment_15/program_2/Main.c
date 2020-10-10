/*
Problem statement : 15.2
Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4
Output : A B C D
 a b c d
 A B C D
 a b c d 
*/

#include <stdio.h>
void Display(int iNo1,int iNo2)
{
    int i=0,j=0;
    int Ass=64,ass=96;
    for(i=1;i<=iNo1;i++)
    {
        for(j=1;j<=iNo2;j++)
        {
            if(i%2==0)
            {
             printf("%c\t",ass+j);   
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
