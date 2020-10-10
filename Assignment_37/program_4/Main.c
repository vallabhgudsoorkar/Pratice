/*
Problem statement : 30.4
 Write a program which accept string from user and copy small
characters of that string into another string.
Input : “Marvellous multi OS”
Output : “arvellous multi” 

*/
#include<stdio.h>
void DisplayToggle(char *str)
{
     char temp;
    char *first,*last;
      first = str;
      last = str; 
            while(*last != '\0')
        {
            last++;
        }
            last--;
        while(first <= last)
        {  
           
             if((*last>='A') && (*last<='Z'))
            {
                 *last = *last + 32;
            }
             if((*first>='A') && (*first<='Z'))
            {
                * first = *first + 32;
            }

            temp = *first;
            *first = *last;
            *last = temp;
            first++;
            last--;
        }

    
  printf("After : %s",str);


}


int main()
{
    char ch[30];
    char br[30];

    printf("Entre the 1st string\n");
    scanf("%[^'\n']s",ch);

  

    DisplayToggle(ch);

    



    return 0;
}