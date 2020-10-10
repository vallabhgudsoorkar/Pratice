/*
    Program : 47.2
    Write a recursive program which accept number from user and return
        largest digit
Input : 87983
Output: 9

*/
#include<stdio.h>

int Display(int No)
{
     static int i =0;
    int iDigit = 0;

    if(No>0)
    {
        iDigit = No % 10;
        if(iDigit > i)
        {
            i = iDigit;
        }
        No = No / 10;

        Display(No);

    }
    return i;
      
}
int main()
{
        int no = 0 , iRet = 0;
    printf("Entre Number\n");
    scanf("%d",&no);
   iRet = Display(no);
    printf("Largest Digit is : %d",iRet);


    return 0;
}