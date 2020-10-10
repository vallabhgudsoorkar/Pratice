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
  while( (temp -> next) != NULL)
  {
    if((temp -> data) == No)
    {
        break;
    }
    
 
    icnt++;
    temp = temp -> next;
  }
 
    if((temp -> data) == No)
    {
       return icnt;
    }
   
    
}

int main()
{
  PNODE First = NULL;
  int no = 0 ,Pos = 0;
  int iRet = 0;
  int iRetOcc = 0;
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
  printf("Position is : %d",iRetOcc);

 return 0;
}