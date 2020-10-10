/*
    Program : 46.4
     .Write a recursive program which display below pattern.
Output : A B C D E F


*/
#include <stdio.h>
int  Display(int no)
{
    static int iMult = 1;
    if(no>0)
    {
       
        iMult = iMult * no;
        no--;
        Display(no);
    }

    return iMult;

}

int main()
{
    int iRet = 0;
    int value = 0;
    printf("Entre Number\n");
    scanf("%d",&value);

   iRet =  Display(value);

   printf("Factorial is : %d",iRet);
    return 0;
}
