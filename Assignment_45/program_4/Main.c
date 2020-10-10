/*
    Program : 45.4
     .Write a recursive program which display below pattern.
Output : A B C D E F


*/
#include <stdio.h>
void Display(int no)
{
    static char ch = 'A';
    if(no>0)
    {
        printf("%c\t",ch);
        ch++;
        no--;
        Display(no);
    }



}

int main()
{
    int value = 0;
    printf("Entre Number\n");
    scanf("%d",&value);

    Display(value);
    return 0;
}
