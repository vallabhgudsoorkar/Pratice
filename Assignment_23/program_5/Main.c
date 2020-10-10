/*
Problem statement : 23.5
 Accept N numbers from user and accept one another number as NO ,
return frequency of NO form it. 
Input : N : 6
 NO: 66
 Elements : 85 66 3 66 93 88
Output : 2
Input : N : 6
 NO: 12
 Elements : 85 11 3 15 11 111 
*/

#include <stdio.h>
#include<stdlib.h>


int ArryOddProduct(int arr[],int iNo)
{
    int j=0,iMult=1;
    for(j=0;j<iNo;j++)
    {
        if(arr[j]%2!=0)
        {
            iMult=iMult*arr[j];
        }
    }
    if(iMult==1)
    {
        return 0;
    }
    else
    {
        return iMult;
    }
    
    
}


int main()
{
    int iValue=0,iRet=0;
    int *ptr=NULL;
    int i=0;

    printf("Entre the Limit of array");
    scanf("%d",&iValue);

    ptr=(int *)malloc(sizeof(int)*iValue);

    printf("Entre the numbers\n");

    for(i=0;i<iValue;i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet=ArryOddProduct(ptr,iValue);

    printf("Product is %d",iRet);

    free(ptr);


    return 0;
}
