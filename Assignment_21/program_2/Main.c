/*
Problem statement : 21.2
 Accept N numbers from user and display all such elements which are
divisible by 5.
Input : N : 6
 Elements : 85 66 3 80 93 88
Output : 85 80 
*/

#include <stdio.h>
#include <stdlib.h>

void ArrySum(int iNo1,int arr[])
{
    int j=0;

     for(j=0;j<iNo1;j++)
    {
        if(arr[j]%5==0)
        {
            printf("%d\t",arr[j]);
        }

    }
}
int main()
{
    int n=0;
    int i=0,j=0;
    int *ptr=NULL;
    int iret=0;

    printf("Entre the limit of NUmbers ");
    scanf("%d",&n);

    ptr = (int*)malloc(n*sizeof(int));
    
     for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }

    ArrySum(n,ptr);

    return 0;
}