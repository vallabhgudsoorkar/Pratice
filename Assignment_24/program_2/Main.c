/*
Problem statement : 22.2
 Accept N numbers from user and return difference between frequency of
even number and odd numbers.
Input : N : 7
 Elements : 85 66 3 80 93 88 90 

*/


#include <stdio.h>
#include<stdlib.h>

#define ERRMEMORY 7218
#define ERRSIZE   1961

int  ArrayCount(int iNo,int *arr)
{
    int j=0;
    int iMin=arr[0];

    if(arr==0)
    {
        return ERRMEMORY;
    }
    if(iNo<=0)
    {
        return  ERRSIZE ;
    }
    for(j=0;j<iNo;j++)
    {
        if(arr[j]<iMin)
        {
            iMin=arr[j];
        }
    }
        return iMin;
}

   int main()
{
    int iValue=0;
    int i=0;
    int *ptr= NULL;
    int iRet=0;

    printf("Entre limit of Array");
    scanf("%d",&iValue);

    ptr=(int *)malloc(iValue*sizeof(int));

    if(ptr==NULL)
    {
        printf("ERROR :  memory allocation Fail");
        return -1;
    }

    for(i=0;i<iValue;i++)
    {
        scanf("%d",&ptr[i]);        
    }

   iRet = ArrayCount(iValue,ptr);
    if(iRet==ERRSIZE)
    {
    
        printf("ERROR : Invalid Size\n");

    }
    else if(iRet==ERRMEMORY)
    {

        printf("ERROR: Invalid Memory Address\n");
    
    }
    else
    {

        printf("Smallest Number in array  is %d",iRet);
   
    }
    
    free(ptr);
    
    return 0;
}


