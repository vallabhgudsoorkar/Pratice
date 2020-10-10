/* problem : 9.4
    Write a program which accepts N from user and print all odd numbers up to N.  . 
*/

#include<stdio.h>

void DisplayPattern(int iNo)
{
    int i=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(i=1;i<=iNo;i++)
    {
        if(i%2!=0)
        {
        printf(" %d",i);
        }
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
