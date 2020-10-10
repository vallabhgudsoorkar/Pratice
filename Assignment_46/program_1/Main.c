/*
    Program : 46.1
      Write a recursive program which accept number from user and display below
pattern.
Input : 5
Output : 5 * 4 * 3 * 2 * 1 *
Prototype : 
*/
#include<stdio.h>

void Display(int iNo)
{
   
    if(iNo>0)
    {
        printf("*\t%d\t",iNo);
        iNo--;
        Display(iNo);
    }


}

int main()
{
    int no = 0;
    printf("Entre number\n");
    scanf("%d",&no);
    Display(no);



    return 0;
}
