/*
Problem statement : 39.3
 Write a program which returns addition of all element from singly linear
linked list.
Function Prototype :int Addition( PNODE Head);
Input linked list : |10|->|20|->|30|->|40|
Output : 100 
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
typedef struct Node**  PPNODE;

void InsertLast(PPNODE Head , int No)
{   
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        temp = *Head;       // Store the address of first node
        
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        
        temp->next = newn;     
    }
    
}

int Addition( PNODE Head)
{
    PNODE Temp = NULL;
    Temp = Head;
    int iSum = 0;

    while((Temp)!= NULL)
    {
        iSum  = iSum + (Temp -> data);
        Temp = Temp -> next;  
    }
    return iSum;
}
int main()
{
    int no = 0;
    PNODE First = NULL;
    int iRet = 0;
    
    printf("Entre NUmber \n");
    scanf("%d",&no);
    InsertLast(&First,no );

    printf("Entre NUmber \n");
    scanf("%d",&no);
    InsertLast(&First,no );

    printf("Entre NUmber \n");
    scanf("%d",&no);
    InsertLast(&First,no );
    
    printf("Entre NUmber \n");
    scanf("%d",&no);
    InsertLast(&First,no );

    iRet = Addition(First);

    printf("Addition of all elements of linked list is : %d",iRet);
    return 0;
}