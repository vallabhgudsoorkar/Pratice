/*
    Program : 46.5
    
    Write a recursive program which accept number from user and return its
product of digits.
Input : 523
Output : 30 


*/

#include <stdio.h>
int Display(int no)
{
    static int iMult = 1;
     int iDigit  = 0;
    if(no>0)
    {
       iDigit = no % 10;
        iMult = iMult * iDigit;
        no = no / 10;
        Display(no);
    }

    return iMult;

}

int main()
{
    int value = 0 , iRet = 0; 
    printf("Entre Number\n");
    scanf("%d",&value);

   iRet =  Display(value);
   printf("%d",iRet);
    return 0;
}
