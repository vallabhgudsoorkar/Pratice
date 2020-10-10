/* problem : 9.5
     Write a program which accept N and print first 5 multiples of N. . 
*/

#include<stdio.h>

void DisplayPattern(int iNo)
{
    int i=0;
    int iMult=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(i=1;i<=5;i++)
    {
        
        iMult = iNo *i;
        printf(" %d",iMult);
        
    }

}


int main()
{
    int iValue=0;

    printf("Entre Number\n");
    scanf("%d",&iValue);

    DisplayPattern(iValue);



    return 0;



}
