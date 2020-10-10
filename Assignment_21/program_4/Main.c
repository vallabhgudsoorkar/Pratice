/*
Problem statement : 19.4
4. Accept N numbers from user and display all such elements which are
divisible by 3 and 5.
Input : N : 6
 Elements : 85 66 3 15 93 88
Output : 15 
 * * * * * * 
*/

#include <stdio.h>
#include <stdlib.h>
void ArraySum(int iNo,int arr[])
{
    int j=0;
    printf("The Number which are divisible by 3 and 5 are :");
    for(j=0;j<iNo;j++)
    {
        if((arr[j]%3==0) && (arr[j]%5==0))
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
