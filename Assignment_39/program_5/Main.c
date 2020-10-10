/*
    Problem statement : 39.5
    . Write a program which return smallest element from singly linear linked
list.
Function Prototype :int Minimum( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 20

 */
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
void InsertLast(PPNODE Head , int No)
{
     PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    PNODE temp = NULL;

    temp = *Head;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while( (temp -> next) != NULL)
        {
            temp = temp -> next;
        }

        temp -> next = newn;
    }
 
}
int Minimum(PNODE Head )
{
   PNODE Temp  = Head;
   int Min = 0;

   Min = Temp -> data;

while (Temp!= NULL)
{
    if((Temp -> data)< Min)
    {
        Min = Temp -> data;
    }

    Temp = Temp -> next;
}

return Min;

 
}

int main()
{
    PNODE First = NULL;
    int iRet = 0 , no =0;

    printf("Entre NUmber \n");
    scanf("%d",&no);
    InsertLast(&First , no);

     printf("Entre NUmber \n");
    scanf("%d",&no);
    InsertLast(&First , no);

     printf("Entre NUmber \n");
    scanf("%d",&no);
    InsertLast(&First , no);


     printf("Entre NUmber \n");
    scanf("%d",&no);
    InsertLast(&First , no);



     printf("Entre NUmber \n");
    scanf("%d",&no);
    InsertLast(&First , no);

    
    iRet = Minimum( First);

    printf("Minimun of Numbner is : %d",iRet);



    return 0;
}