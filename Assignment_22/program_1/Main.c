/*
Problem statement : 22.1
 Accept N numbers from user and return frequency of even numbers.
Input : N : 6
 Elements : 85 66 3 80 93 88
Output : 3
*/

#include <stdio.h>
#include<stdlib.h>

#define ERRMEMORY -1
#define ERRSIZE   -2

int  ArrayCount(int iNo,int *arr)
{
    int iCnt=0,j=0;

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
        if((arr[j]%2)==0)
        {
            iCnt++;
        }
    }

    return iCnt;
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

        printf("NUmber of Even Numbers are %d",iRet);
   
    }
    
    free(ptr);
    
    return 0;
}

