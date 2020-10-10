/*
Problem statement : 21.5
 Accept N numbers from user and display all such elements which are
multiples of 11.
Input : N : 6
 Elements : 85 66 3 55 93 88
Output : 66 55 88 
*/

#include <stdio.h>
#include <stdlib.h>
void ArraySum(int iNo,int arr[])
{
    int j=0;
    printf("The Number which are divisible by 3 and 5 are :");
    for(j=0;j<iNo;j++)
    {
        if((arr[j]%11)==0)
        {
            printf("%d\t",arr[j]);
        }
    }
   
}

int main()
{
    int iValue=0;
    int i=0;
    int *ptr= NULL;


    printf("Entre limit of Array");
    scanf("%d",&iValue);

    ptr=(int *)malloc(iValue*sizeof(int));

    for(i=0;i<iValue;i++)
    {
        scanf("%d",&ptr[i]);        
    }
    ArraySum(iValue,ptr);
    
    free(ptr);

    return 0;
}
