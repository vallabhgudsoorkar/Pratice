/*
    Problem statement :
     Accept string from user and check whether the string is palindrome
or not without considering its case.

   Input : “1abccBA1”
   Output : TRUE 

 */

#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL StrPallindrome(char *Src)
{
    if(
       (Src == NULL) ||     // If source string is NULL
       (Dest == NULL)       // If destination string is NULL
       )
    {
        return;
    }
    char temp;
    char *StrRev,*first ,last;
    StrRev = Src;

    first = StrRev;
    last = StrRev;

    // Travel the Dest string till the '\0'
    while(*last != '\0')    // Junya wahichya shewati ja
    {
       last++;                // Pana palata
    }
        
          // Add the space explictely
    
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
       
}

int main()
{
    char arr[30] = {'\0'};   // Bharaleli book
    char brr[30] = {'\0'};   // Blank book
    
    printf("Please enter first string\n");
    scanf("%[^'\n']s",arr);
    
    printf("Please enter second string\n");
    scanf(" %[^'\n']s",brr);
        
    StrcatXX(arr,brr);       // StrcpyX(arr,brr);
    
    printf("String after concatination :%s\n",arr);
    
    return 0;
}

