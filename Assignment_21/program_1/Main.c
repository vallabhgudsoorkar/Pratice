/*
Problem statement :  21.1
Accept N numbers from user and return difference between summation
of even elements and summation of odd elements. 
Input : N : 6
 Elements : 85 66 3 80 93 88
Output : 53 (234 - 181) 

*/

#include <stdio.h>
#include <stdlib.h>
int  ArrySum(int iNo1,int arr[])
{
    int iESum=0;
    int iOSum=0;
    int j=0;

    for(j=0;j<iNo1;j++)
    {
        if(j%2==0)
        {
            iESum=iESum + arr[j];
        }
        else
        {
            iOSum = iOSum + arr[j];
        }
        
    }
    if(iESum>=iOSum)
    {
        return (iESum-iOSum);
    }
    else
    {
        return (iOSum-iESum);
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

    iret=ArrySum(n,ptr);

    printf("Sum of array is : %d",iret);
   
    return 0;
}
