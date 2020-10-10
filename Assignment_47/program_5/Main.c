/*
    Program : 47.5
     Write a recursive program which accept number from user and return its
reverse number.
Input : 523
Output : 325 


*/

#include <stdio.h>
int  Display(int no)
{
   static int irev  = 0;
    int iDigit = 0;
    if(no > 0)
    {
        iDigit = no % 10;
        irev = (irev * 10 ) + iDigit;
        no = no /10;

        Display(no);        

    }
    return irev;

}

int main()
{
    int value = 0,iRet = 0;
    printf("Entre Number\n");
    scanf("%d",&value);

    iRet = Display(value);
    printf("%d",iRet);
    return 0;
}
