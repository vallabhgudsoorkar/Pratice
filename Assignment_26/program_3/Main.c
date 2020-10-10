/*
Problem statement : 26.3
Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.
Input : Q
Output : Q R S T U V W X Y Z
Input : m
Output : m l k j i h g f e d c b a
Input : 8
Output : 
*/


#include <stdio.h>
void DisplayChar(char ch)
{
    int i=0;
    if((ch>=65) && (ch<=90))
  {
    for(ch;ch<=90;ch++)
    {
        printf("%c\t",ch);
    }
  }
  else
  {
      for(ch;97<=ch;ch--)
      {
          printf("%c\t",ch);
      }
  }
   





}
int main()
{

    char cValue='\0';
    printf("Entre Character\n");
    scanf("%c",&cValue);


    DisplayChar(cValue);
    
    return 0;
}
