/*
Problem statement : 12.1
Write a program which accept number from user and display below pattern. 

*/

#include <stdio.h>
void Display(int iNo)
{
    int i=0;

    for(i=0;i<iNo;i++)
    {   
        printf("* ");

    }
    for(i=0;i<iNo;i++)
    {
         printf("# ");
    }

}

int main()
{
    int iValue=0;

    printf("Entre Number");
    scanf("%d",&iValue);

    Display(iValue);
   
    return 0;
}
