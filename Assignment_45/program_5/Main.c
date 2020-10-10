/*
    Program : 45.5
     .5.Write a recursive program which display below pattern.
Output : a b c d e f 


*/

#include <stdio.h>
void Display(int no)
{
    static char ch = 'a';
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
