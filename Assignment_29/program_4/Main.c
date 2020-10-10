/*
Problem statement : 29.4
Write a program which accept string from user and accept one
character. Return index of last occurrence of that character.
Input : “Marvellous Multi OS”
 M
Output : 11
Input : “Marvellous Multi OS”
 W
Output : -1
Input : “Marvellous Multi OS”
 e
Output : 4 

*/
#include<stdio.h>
int StringChkLast(char str[],char cChk)
{
    int i=0;
    int iCnt=0;
    int iPos;
    while(str[i]!='\0')
    {
        if(str[i]==cChk)
        {
           
        
        iPos=i;
       
         }
        

      i++;
   
     }
  
   
       return iPos;
   
   
   
   
    

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


    bRet=StringChkLast(ch,cValue);
    
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