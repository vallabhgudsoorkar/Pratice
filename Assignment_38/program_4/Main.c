/*
Problem statement : 39.4
 Write a program which return largest element from singly linear linked
list.
Function Prototype :int Maximum( PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output : 320 


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
        temp = *Head;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;

    }
    
}
int Maximum(PNODE Head)
{
    PNODE Temp = NULL;
    int Max = 0;
    Temp = Head;
    Max = Temp -> data;
    while(Temp != NULL)
    {
        

        if((Temp -> data) > Max)
        {
            Max = Temp -> data;
        }


       Temp =  Temp -> next;
    }

    return Max;

}


int main()
{
    PNODE First = NULL;
    int no = 0;
    int iRet = 0;

    printf("Entre Number \n");
    scanf("%d",&no);

    InsertLast(&First,no);

    printf("Entre Number \n");
    scanf("%d",&no);

    InsertLast(&First,no);

    printf("Entre Number \n");
    scanf("%d",&no);

    InsertLast(&First,no);


    printf("Entre Number \n");
    scanf("%d",&no);

    InsertLast(&First,no);


    printf("Entre Number \n");
    scanf("%d",&no);

    InsertLast(&First,no);

    iRet = Maximum(First);

    printf("Maximum element in the linked list is : %d",iRet);



    return 0;
}