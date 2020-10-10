/*
Problem statement : 23.1
 Accept N numbers from user and accept one another number as NO ,
check whether NO is present or not.
Input : N : 6
 NO: 66
 Elements : 85 66 3 66 93 88
Output : TRUE
Input : N : 6
 NO: 12
 Elements : 85 11 3 15 11 111 
*/

#include <stdio.h>
#include<stdlib.h>

#define ERRMEMORY -1
#define ERRSIZE   -2
#define TRUE   1
#define FALSE 0
typedef int BOOL;

BOOL  CHECK(int iNo,int *arr,int iChk)
{
    int j=0;

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
        if(arr[j]==iChk)
        {
            return TRUE;
        }
        
        
    }

    
}

   int main()
{
    int iValue=0,iNO=0;
    int i=0;
    int *ptr= NULL;
    BOOL bRet=FALSE;

    printf("Entre limit of Array");
    scanf("%d",&iValue);

    printf("Entre Number to be Checked");
    scanf("%d",&iNO);

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

   bRet= CHECK(iValue,ptr,iNO);
    if(bRet==ERRSIZE)
    {
    
        printf("ERROR : Invalid Size\n");

    }
    else if(bRet==ERRMEMORY)
    {

        printf("ERROR: Invalid Memory Address\n");
    
    }
    else if (bRet==TRUE)
    {

       printf("TRUE");
   
    }
    else if(bRet==TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    
    
    
    free(ptr);
    
    return 0;
}

