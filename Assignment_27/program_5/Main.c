/*
Problem statement : 27.5
 Write a program which accept string from user and display it inn
reverse order.
Input : “MarvellouS”
Output : “SuollevraM” 
*/

#include <stdio.h>
void DisplayRev(char str[])
{
    
  int iStart = 0, iEnd = 0;
    char temp = '\0';
    
    if(str == NULL)
    {
        return;
    }
    
    // Travel the string till end
    while(str[iEnd] != '\0')        // O(N)
    {
        iEnd++;
    }
    iEnd --;
    
    while(iStart < iEnd)            // O(N/2)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;
        
        iStart++;
        iEnd--;
    }
    





}
int main()
{
    char ch[20];

    printf("Entre the String\n");
    scanf("%[^'\n']s",&ch);

    DisplayRev(ch);

    printf("Reverse of the string is %s",ch);
    
    return 0;
}