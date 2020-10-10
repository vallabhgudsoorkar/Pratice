/*
    Program : 45.2
     Write a recursive program which display below pattern.
Output : 1 2 3 4 5 

*/
#include<stdio.h>

void Display(int No)
{
     static int i =1;
    if(i<=No)
    {
        printf("%d\t",i);
        i++;
      Display(No);
    }
      
}
int main()
{
        int no = 0;
    printf("Entre Number\n");
    scanf("%d",&no);
    Display(no);



    return 0;
}