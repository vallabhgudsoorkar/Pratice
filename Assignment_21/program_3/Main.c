/*
Problem statement : 21.3
Accept N numbers from user and display all such elements which are
even and divisible by 5.
Input : N : 6
 Elements : 85 66 3 80 93 88  
*/

#include <stdio.h>
#include <stdlib.h>
void ArraySum(int iNo,int arr[])
{
    int j=0;
    for(j=0;j<iNo;j++)
    {
        if((arr[j]%2==0) && (arr[j]%5==0))
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

    return 0;
}
