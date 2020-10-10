/*
Problem statement : 30.3
 Write a program which accept string from user and copy capital
characters of that string into another string.
Input : “Marvellous Multi OS”
Output : “MMOS”  
*/


#include<stdio.h>

void DisplayToggle(char *str,char *dstr)
{
    
 
    
    while(*str!='\0')
    {  
        
         if((*str >='A') && (*str <='Z'))
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