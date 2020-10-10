/*
Problem statement : 23.4
 Accept N numbers from user and accept Range, Display all elements from
that range
Input : N : 6
 Start: 60

 End : 90

 Elements : 85 66 3 76 93 88
Output : 66 76 88
Input : N : 6
 Start: 30

 End : 50

 Elements : 85 66 3 76 93 88
Output :
*/

#include <stdio.h>
#include<stdlib.h>

#define ERRMEMORY 7218
#define ERRSIZE   1961


void ArrayDisplay(int iNo,int *arr,int iStart,int iEnd)
{
    int j=0,iCnt=0;

  
    
    for(j=0;j<iNo;j++)
    {
        if((arr[j]>=iStart) && (arr[j]<=iEnd))
        {
          printf("%d\t",arr[j]);
        }
    }
   
}

   int main()
{
    int iValue=0,No1=0,No2=0;
    int i=0;
    int *ptr= NULL;
    int iRet=0;

    printf("Entre limit of Array");
    scanf("%d",&iValue);
    
    printf("Entre Start and End of a NUmber");
    scanf("%d%d",&No1,&No2);

    printf("Entre Elements\n");
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

    ArrayDisplay(iValue,ptr,No1,No2);
   
    free(ptr);
    
    return 0;
}

