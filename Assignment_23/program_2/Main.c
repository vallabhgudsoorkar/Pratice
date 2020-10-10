/*
Problem statement : 22.2
 Accept N numbers from user and accept one another number as NO ,
return index of first occurrence of that NO.
Input : N : 6
 NO: 66
 Elements : 85 66 3 66 93 88
Output : 1 
Input : N : 6
 NO: 12
 Elements : 85 11 3 15 11 111
Output : -1 
*/


#include <stdio.h>
#include<stdlib.h>

#define ERRMEMORY 7218
#define ERRSIZE   1961

int  ArrayNOChek(int iNo,int *arr,int iChk)
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
            return j;
            break;
        }
        else 
        {
            return -1;
        }
    }
}

   int main()
{
    int iValue=0 ,iNO=0;
    int i=0;
    int *ptr= NULL;
    int iRet=0;

    printf("Entre limit of Array\n");
    scanf("%d",&iValue);

    printf("Entre NUmber to be Checked\n");
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

   iRet = ArrayNOChek(iValue,ptr,iNO);
    if(iRet==ERRSIZE)
    {
    
        printf("ERROR : Invalid Size\n");

    }
    else if(iRet==ERRMEMORY)
    {

        printf("ERROR: Invalid Memory Address\n");
    
    }
    else if (iRet==-1)
    {
        printf("There is no such number"); 
    }
    else
    {

        printf("First occurrence of number is %d",iRet);
   
    }
    
    free(ptr);
    
    return 0;
}


