/*
Problem statement : 24.3
  Accept N numbers from user and return the difference between largest
and smallest number.
Input : N : 6
 Elements : 85 66 3 66 93 88
Output : 90 (93 -3) 
*/


#include <stdio.h>
#include<stdlib.h>

#define ERRMEMORY 7218
#define ERRSIZE   1961


int  ArrayCount(int iNo,int *arr)
{
    int j=0;
    int iMin=arr[0];
    int iMax=arr[0];
    int Diff=0;

    if(arr==0)
    {
        return ERRMEMORY;
    }
    if(iNo<=0)
    {
        return  ERRSIZE ;
    }
    for(j=1;j<iNo;j++)
    {
        if(arr[j]>iMax)
        {
            iMax=arr[j];
        }
        if(arr[j]<iMin)
             {
                 iMin=arr[j];
             }
         
        

    }
    Diff=iMax-iMin;
  return iMax-iMin;

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
    

    printf("The Difference of Maximum and minmun in it %d",iRet);

    
    
    free(ptr);
    
    return 0;
}



