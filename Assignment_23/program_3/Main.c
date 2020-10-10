/*
Problem statement : 23.3
Accept N numbers from user and accept one another number as NO ,
return index of last occurrence of that NO. 
Input : N : 6
 NO: 66
 Elements : 85 66 3 66 93 88
Output : 3
Input : N : 6
 NO: 93
 Elements : 85 66 3 66 93 88
Output : 4
Input : N : 6
 NO: 12
 Elements : 85 11 3 15 11 111
Output : -1 
*/


#include <stdio.h>
#include<stdlib.h>

#define ERRMEMORY 7218
#define ERRSIZE   1961


int  ArrayNOChk(int iNo,int *arr,int iChk)
{
    int j=0,k=0;

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
            k=j;
            continue;
        }
       
    }
    if(k==0)
    {
        return -1;
    }
    else
    {
        return k;
    }
    
    
}

   int main()
{
    int iValue=0,iNO=0;
    int i=0;
    int *ptr= NULL;
    int iRet=0;

    printf("Entre limit of Array");
    scanf("%d",&iValue);
    
    printf("Entre NUmber to be Checked");
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

   iRet = ArrayNOChk(iValue,ptr,iNO);
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



