/*
    Problem statement :
 Accept 2 strings from user and concate the contens of first string at the end second string.
 
 Implement strcat. (With white space)
 
 First : "abcd xy"
 Second : "pqr 21"
 
 Updated Second : "pqr 21_abcd xy"
 */

#include<stdio.h>

void StrcatXX(char *Src, char *Dest)
{
    if(
       (Src == NULL) ||     // If source string is NULL
       (Dest == NULL)       // If destination string is NULL
       )
    {
        return;
    }
    
    // Travel the Dest string till the '\0'
    while(*Src != '\0')    // Junya wahichya shewati ja
    {
       Src++;                // Pana palata
    }
        
    *Src = ' ';        // Add the space explictely
    
    Src++;
   
    while(*Dest != '\0')
   {
      *Src =  *Dest ;
       Src++;
       Dest++;
   }
    
    *Src = '\0';
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

