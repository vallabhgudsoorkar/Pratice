/*
Problem statement : 29.3
Write a program which accept string from user and accept one
character. Return index of first occurrence of that character.
Input : “Marvellous Multi OS”
 M
Output : 0  
*/


#include<stdio.h>

int StringChk(char str[],char cChk)
{
    int i=0;
    int iCnt=0;
    while(str[i]!='\0')
    {
        if(str[i]==cChk)
        {
           
        break;

         }
        

      i++;
   
     }
   if(str[i]==cChk)
   {
       return i;
   }
   else
   {
       return -1;
   }
   
    

}

int main()
{
    char ch[30];
    char cValue = '\0';
    int  bRet=0;


    printf("Entre the Character\n");
    scanf("%[^'\n]s",ch);

    printf("Entre the Character\n");
    scanf(" %c",&cValue);


    bRet=StringChk(ch,cValue);
    
    if(bRet==-1)
    {
            printf("Character is not present in string");
    }
  else
  {
    printf("Frequencu of Character is %d",bRet);  
  }
  
    
    

   return 0;
}