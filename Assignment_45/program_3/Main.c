/*
    Program : 45.3
     Write a recursive program which display below pattern.
Output : 5 4 3 2 1 


*/
#include <stdio.h>
void Display(int No)
{
    if( No > 0 ) 
    {
        printf("%d\t",No);
        No--;
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