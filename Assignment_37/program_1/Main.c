/*
Problem statement : 37.1
    Write a program which accept string from user count number of
words from string
Input : “Marvellous Multi OS”
Output : 3
Input : “ Marvellous Multi OS Pune”
Output : 4 


*/

#include <stdio.h>
  int  StrcpRev(char *Src )
{
  int iCnt = 1;
  while(*Src!='\0')
  {
    if(*Src==' ')
    {
      iCnt++;
    }
    Src++;
  } 

  return iCnt;
  
}
int main()
{
    char arr[30];
    char brr[30];
    int iValue = 0;

    printf("Entre the string\n");
    scanf("%[^'\n']s",arr);

    iValue=StrcpRev(arr);

    printf("After : %d",iValue);
    
   

    return 0;
}