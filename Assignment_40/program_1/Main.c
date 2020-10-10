#include <stdio.h>
#include<stdlib.h>

struct Node 
{
  int data;
  struct Node * next;
};
typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;




void InsertLast(PPNODE Head , int No)
{
  PNODE newn = NULL;
  
  newn = (PNODE)malloc(sizeof(NODE));

  newn -> data = No;
  newn -> next = NULL;

  PNODE temp = NULL;

  if(*Head == NULL)
  {
     *Head = newn;
  }
  else
  {
    temp = *Head;
    while((temp -> next )!= NULL)
    {
      temp = temp -> next;
    }
    temp -> next =  newn;
  
  }
  
}
void Display(PNODE Head)
{

  while(Head != NULL)
    {
        printf("| %d | -> ",Head->data);
        Head = Head -> next;
    }
  printf("NULL\n");
}
int  DisplayPerfect(PNODE Head)
{
  int i=0 , iSum = 0;
  while(Head != NULL)
  {
    for(i=1;i<(Head -> data)/2;i++)
    {
        if((Head -> data)%i==0)
        {
            iSum = iSum + i;
        }
    }
    if( (Head -> data) == iSum )
    {
      return iSum;
    }
    iSum = 0;
    Head = Head -> next;
  }
}
int main()
{
    int no = 0;
    int iRet = 0;

    PNODE First = NULL;

    printf("Entre NUmber\n");
    scanf("%d",&no);

    InsertLast(&First, no);

    printf("Entre NUmber\n");
    scanf("%d",&no);

    InsertLast(&First, no);
    
    printf("Entre NUmber\n");
    scanf("%d",&no);

    InsertLast(&First, no);
    
    printf("Entre NUmber\n");
    scanf("%d",&no);

    InsertLast(&First, no);
    
    Display(First);

    iRet = DisplayPerfect(First);
    printf("Perfect NUmbers are : %d",iRet);
  return 0;
}