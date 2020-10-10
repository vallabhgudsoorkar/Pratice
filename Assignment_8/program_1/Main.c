/* Program : 8.1
Write a program which accept number from user and if number is less than 50
then print small , if it is greater than 50 and less than 100 then print medium, if it is
greater than 100 then print large. 

*/
#include<stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iNo<=50)
    {
        printf("Small");
    }
    else if ((iNo>50)&&(iNo<=100))
    {
        printf("Medium");
    }
    else
    {
        printf("Greater Than 100");
    }

}

int main()
{
    int iValue=0;
    printf("Entre Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
