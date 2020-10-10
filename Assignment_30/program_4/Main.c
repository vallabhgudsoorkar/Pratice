/*
Problem statement : 30.4
 Write a program which accept string from user and copy small
characters of that string into another string.
Input : “Marvellous multi OS”
Output : “arvellous multi” 

*/
#include<stdio.h>
void DisplayToggle(char *str,char *dstr)
{
    
 
    
    while(*str!='\0')
    {  
        
         if((*str >='a') && (*str <='z'))
        {
           *dstr = *str;
         
           dstr++;
        }

    str++;

      
        
   
    }  

   *dstr='\0';
  


}


int main()
{
    char ch[30];
    char br[30];

    printf("Entre the string\n");
    scanf("%[^'\n']s",ch);

    DisplayToggle(ch,br);

    printf("%s",br);



    return 0;
}