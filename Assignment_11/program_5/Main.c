/*
Problem statement : 11.5
Write a program which accept accept range from user and display all numbers in
between that range in reverse order. 

*/

#include <stdio.h>
 void  DisplayRange(int iNo1,int iNo2)
{
   int i=0;
   int iSum=0;

    for(i=iNo2;iNo1<=i;i--)
    {
       printf("%d ",i);  
    }

    


}

int main()
{
    int iValue1=0;
    int iValue2=0;
    

    printf("Entre Two Numbers\n");
    scanf("%d",&iValue1);
    scanf("%d",&iValue2);
    if(iValue1>iValue2) 
    {
        printf("Invalid Range");
      
    }
    else{
    DisplayRange(iValue1,iValue2);
    }
    
   
    return 0;
}
