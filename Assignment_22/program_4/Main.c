/*
Problem statement : 22.4
 Accept N numbers from user and return frequency of 11 form it.
Input : N : 6
 Elements : 85 66 3 15 93 88
Output : 0
Input : N : 6
 Elements : 85 11 3 15 11 111
Output : 2 
*/

#include <stdio.h>
#include<stdlib.h>

#define ERRMEMORY 7218
#define ERRSIZE   1961
#define TRUE 1
#define FALSE 0

int  ArrayCount(int iNo,int *arr)
{
    int j=0,iCnt=0;

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
        if((arr[j])==11)
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

        printf("Count of 11  is %d",iRet);
   
    }
    free(ptr);
    
    return 0;
}

