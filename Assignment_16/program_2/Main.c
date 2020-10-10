/*
Problem statement : 16.2
Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 4
Output : 
 2 4 6 8 10
 1 3 5 7 9
 2 4 6 8 10
 1 3 5 7 9 
*/

#include <stdio.h>
void Display(int iNo1,int iNo2)
{
    int i=0,j=0;
    
    for(i=1;i<=iNo1;i++)
    {
        for(j=0;j<=iNo2;j++)
        {
            if(i%2==0)
            { 
                  printf("%d\t",(j*2)+1); 
             }
            else
            {
                  printf("%d\t",(j*2)+2);
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
