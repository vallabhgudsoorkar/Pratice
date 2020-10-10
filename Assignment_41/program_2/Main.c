#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE Head ,int No)
{ 
  PNODE newn=NULL;
  newn = (PNODE)malloc(sizeof(NODE));

  newn -> data = No;
  newn -> next = NULL;
  if(Head == NULL)
  {
    *Head = newn;
  }
  else
  { 
    newn -> next = *Head;
    *Head = newn;
  }
  
}
void InsertLast(PPNODE Head , int No)
{
  PNODE temp = NULL;
  PNODE newn = NULL;

  newn = (PNODE)malloc(sizeof(NODE));
  temp = *Head;
  newn -> data = No;
  newn -> next = NULL;
  while(temp -> next != NULL)
  {
    temp = temp -> next;

  }

  temp -> next = newn;

}
void InsertAtPos(PPNODE Head , int No, int iPos)
{
  int iSize = 0 ,i=0; 
  PNODE temp = *Head;
  PNODE newn = NULL;

  iSize = Count(*Head);


  if((iPos < 1)||(iPos>iSize+1))
  {
    return;
  }
   else if(iPos == 1)        // First position
    {
        InsertFirst(Head,No);
    }
    else if(iPos == iSize + 1)    // Last position
    {
        InsertLast(Head, No);
    }
    else
    {
        newn= (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        for(i=1;i<iPos-1;i++)
        {
          temp = temp -> next;
        }
      newn -> next = temp -> next;
      temp -> next = newn;

      
    }
    
  
     

}

void Display(PNODE Head)
{
  while(Head != NULL)
  {
    printf("|%d|->", Head ->data);

   Head = Head -> next;
  }
  printf("NULL\n");
}
int Count(PNODE Head)
{
  int iCnt = 0;

  while(Head != NULL)
  {
    iCnt++;

    Head = Head ->next;
  }
return iCnt;

}
int SearchFirstOcc(PNODE Head , int No)
{
  int icnt = 1;
  PNODE temp = Head;
  int flag = 0;
  while( temp  != NULL)
  {
    if((temp -> data) == No)
    {
        flag = icnt;
    }
    
 
    icnt++;
    temp = temp -> next;
  }
 
    
     return flag;
    
}
void DisplayPrime(PNODE Head)
{
  while(Head != NULL)
  {
    if(((Head -> data)%2!=0)&&((Head -> data)%3!=0)&&((Head -> data)%5!=0)&&((Head -> data)%6!=0)&&((Head -> data)%7!=0))
    {
      printf("%d\t",Head -> data);
    }

    Head = Head -> next;
  }
}
int DisplayEven(PNODE Head)
{
  int iSum = 0;
   while(Head != NULL)
  {

      if((Head -> data )%2==0)
      {
        iSum = iSum + (Head -> data);
      }




    Head = Head -> next;
  }
  return iSum;
}
int SecMaximum(PNODE Head)
{
  int Max1=0 ,Max2=0;

  Max1 = Head -> data;
  while (Head != NULL)
  { 
    if(Max1 > Head -> data)
    {
      Max2 = Max1;
      Max1 = Head -> data;
      
    }
    else if(((Head -> data) > Max2 ) &&((Head -> data)< Max1))
    {
        Max2 =  Head -> data;
    }
    Head = Head -> next;
  }
  
  return (Max2);
}
void SumDigit(PNODE Head)
{ 
  int iDigit = 0 , iSum = 0;
  while (Head != NULL)
  {

    while(Head -> data !=0)
    {
      iDigit = (Head -> data) % 10;
      iSum = iSum + iDigit;
      Head -> data = Head -> data /10;
    }
    printf("%d\t",iSum);
    iDigit = 0;
    iSum = 0;



    Head = Head -> next;
  }
  



}
int main()
{
  PNODE First = NULL;
  int no = 0 ,Pos = 0;
  int iRet = 0;
  int iRetOcc = 0;
  int iRetP = 0;
  iRetSumd = 0;
  printf("Entre Number \n");
  scanf("%d",&no);
  InsertFirst(&First,no);

  printf("Entre Number \n");
  scanf("%d",&no);
  InsertFirst(&First,no);
  
  printf("Entre Number \n");
  scanf("%d",&no);
  InsertFirst(&First,no);
 

  printf("Entre Number \n");
  scanf("%d",&no);
  InsertFirst(&First,no);
  

  printf("Entre Number \n");
  scanf("%d",&no);
  InsertFirst(&First,no);
 

  printf("Entre Number \n");
  scanf("%d",&no);
  InsertFirst(&First,no);
 

  printf("Entre Number \n");
  scanf("%d",&no);
  InsertFirst(&First,no);
  Display(First);


  iRet = Count(First);

  printf("%d\n",iRet);

  


  printf("Entre the Number to be Searched \n");
  scanf("%d",&no);
  iRetOcc = SearchFirstOcc(First,no);
  printf("Position is : %d\n",iRetOcc);

   DisplayPrime(First);

  iRetP = DisplayEven(First);
  printf("\nAddition of Even numbers are : %d\n",iRetP);

  iRetSec = SecMaximum(First);
  printf("Second Maximun NUmbewr is :%d\n",iRetSec);
   
     SumDigit(First);
   
 return 0;
}