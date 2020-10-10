/*
Problem statement : 19.3
 Accept number of rows and number of columns from user and display below
pattern.
Piyush Khairnar - 7588945488 आ"ी Technical सं&ार करतो !!! ©Marvellous Infosystems Page 2
Marvellous Logic Building Assignment : 19
Input : iRow = 6 iCol = 6
Output : 
 * * * * * *
 *       * *
 *     *   *
 *   *     *
 * *       *
 * * * * * * 
*/

#include <stdio.h>
void Display(int iNo1,int iNo2)
{
    int i=0,j=0;
    
    for(i=1;i<=iNo1;i++)
    {
        for(j=iNo2;j>=1;j--)
        {
            if((i==j) ||(i==1) || (j==1) || (i==iNo1) || (j==iNo2) )
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
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
