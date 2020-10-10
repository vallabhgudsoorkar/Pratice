/*
Problem statement : 25.5
  Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM
*/

#include <stdio.h>

#define TRUE  1
#define FALSE 0
typedef int BOOL;

void  ChkChar(char cChk)
{
    if((cChk==65)||(cChk==97) )
    {
        printf("Your exam at 7.00 AM ");
    }
    else if((cChk==66)||(cChk==98))
    {
         printf("Your exam at 8.30 AM ");
    }
    else if((cChk==67)||(cChk==99) )
    {
        printf("Your exam at 9.20 AM ");
    }
    else if((cChk==68)||(cChk==100))
    {
        printf("Your exam at 10.00 AM ");
    }
    
}

   int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    char cValue='\0';

    printf("Entre the character\n");
    scanf("%c",&cValue);

     ChkChar(cValue);

    




    return 0;
}
