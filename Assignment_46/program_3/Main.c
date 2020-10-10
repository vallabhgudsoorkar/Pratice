/*
    Program : 46.3
    Write a recursive program which accept string from user and count number
of characters.
Input : Hello
Output : 5


*/
#include <stdio.h>
int  Display(char *str)
{   
    static int iCnt = 0;
    if(*str > '\0')
    {
        iCnt++;
        str++;
        Display(str);
    }
   return iCnt;

}
int main()
{
   int iRet = 0;
 char arr[20];
 printf("Enter string\n");
 scanf("%s",arr);
 iRet = Display(arr);
 printf("%d",iRet);

 return 0;;
}