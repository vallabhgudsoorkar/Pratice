/* problem : 9.2
    Write a program which accept number from user and print numbers till that
number. 
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

        printf(" %d",i);

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
