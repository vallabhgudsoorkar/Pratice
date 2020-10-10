/* problem : 9.1
Write a program which accept number from user and print that number of $ & *
on screen. 
Correction :- Use \t
*/


#include<stdio.h>

void DisplayPattern(int iNo)
{
    int i=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(i=0;i<iNo;i++)
    {

        printf(" $  * ");

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
