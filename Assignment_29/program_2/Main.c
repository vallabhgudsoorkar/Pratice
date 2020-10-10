/*
Problem statement : 35.2
Write a program which accept string from user and print below
pattern.
Input : “Marvellous”
Output : M a r v e l l o u s
 M a r v e l l o u
 M a r v e l l o
 M a r v e l l
 M a r v e l
 M a r v e
 M a r v
 M a r
 M a
 M
Input : “PPA”
Output : P P A
 P P
 P 

*/

#include<stdio.h>

void Display(char str[])
{
  int icnt = 0,i=0,j=0,k=0;
  while(str[k] != '\0')
  {
    k++;
    icnt++;
  }
  for(i=1;i<=icnt;i++)
  {

                    while(str[j]!='\0')
                     {
                        printf("%c\t",str[j]);
                                j++;
                     }
                        printf("\n");
                            j=0;
                            icnt--;
  }
 

}



int main()
{
  char ch[30];
  printf("Entre the String\n");
  scanf("%[^'\n']s",ch);


  Display(ch);




  return 0;
}

