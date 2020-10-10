/*
Problem statement : 36.1
 Write a program which accepts 2 strings from user and concat N
characters of second string after first string.Value of N should be
accepted from user. (Implement strncat() function).

Note : If third parameter is greater than the size of second string then
concat whole string after first string.

Input : “Marvellous Infosystems”
 “Logic Building”
 5
Output : “Marvellous Infosystems Logic” 

*/

#include <stdio.h>

void StrcpRev(char *Src ,char *Dest,int iLimit)
{
  while(*Src!='\0')
  {
    *Src++;
  } 
  *Src = ' ';
  Src++; 
  while((*Dest!='\0') &&(iLimit!=0) )
  {
    *Src = *Dest;
    Src++;
    Dest++;
    iLimit--;
  } 

  *Src = '\0';
}
int main()
{
    char arr[30];
    char brr[30];
    int iValue = 0;

    printf("Entre the string\n");
    scanf("%[^'\n']s",arr);

    printf("Entre second String\n");
    scanf(" %[^'\n']s",brr);

    printf("\nEntre the value upto which you want to concate 2nd string\n");
    scanf(" %d",&iValue);

    StrcpRev(arr,brr,iValue);

    printf("After : %s",arr);
    //printf("\nAfter : %s",brr);
   

    return 0;
}