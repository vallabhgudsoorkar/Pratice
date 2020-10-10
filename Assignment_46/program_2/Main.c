/*
    Program : 46.2
  Write a recursive program which accept number from user and return
summation of its digits.
Input : 879
Output : 24 


*/
#include<stdio.h>

int  Display(int No)
{
    int iDigit = 0 ;
    static int iSum = 0;
     
     if(No>0)
     {
         iDigit = No %10;
         iSum = iSum + iDigit;
         No = No /10;
         Display(No);
     }
     return iSum;
      
}
int main()
{
        int no = 0,iRet = 0;
    printf("Entre Number\n");
    scanf("%d",&no);
    iRet = Display(no);
    printf("%d",iRet);


    return 0;
}