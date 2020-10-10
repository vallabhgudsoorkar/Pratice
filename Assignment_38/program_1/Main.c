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
