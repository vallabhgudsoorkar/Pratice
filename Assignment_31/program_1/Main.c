/*
Problem statement : 31.1
Write a program which accept string from user and copy that
characters of that string into another string in reverse order.
Input : “Marvellous Python”
Output : “nohtyP suollevraM” 
*/

#include <stdio.h>

void StrcpRev(char *Src ,char *Dest)
{
    int iCnt=0;
    char *temp;
    while(*Src!='\0')
    {
       
        Src++;
  
    }
     while(*Src!='\0')
    {
      *temp = *Src;
    *Src =   *Dest ;
     *temp = *Dest;;
      Src--;
    }
   






}


int main()
{
    char arr[30];
    char brr[30];

    printf("Entre the string\n");
    scanf("%[^'\n']s",arr);

    printf("Entre second String\n");
    scanf(" %[^'\n']s",brr);


    StrcpRev(arr,brr);

    printf("After : %s",arr);
   

    return 0;
}