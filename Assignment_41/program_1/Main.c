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
    while((temp ->next )!= NULL)
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
void Reverse(PNODE Head)
{
  int iDigit = 0 , temp= 0;
  int iRev = 0 ;
  while (Head != NULL)
  {
      temp = (Head -> data);
    while(temp !=0)
    {
      iDigit = (temp) % 10;
      iRev = (iRev*10) + iDigit;
      temp = temp /10;
    }
    printf("| %d |->",iRev);
    iDigit = 0;
    temp= 0;
    iRev = 0;


    Head = Head -> next;
  }
  printf("NULL\n");


}
void  DisplayPallindrome(PNODE Head)
{
  int Temp ;

  
  int idigit = 0 , iSum = 0;
  int irev = 0 ;
  printf("Pallindrome :\t");
  while (Head != NULL)
  {
    iSum = (Head -> data);
    while(iSum !=0 )
    {
      idigit = (iSum) % 10;
      irev = (irev * 10) + idigit;
      iSum = (iSum)/10;
    }
      if((Head -> data)==irev)
      {
        printf("%d\t", irev);
      }
      
    idigit = 0;
    irev = 0;
    iSum = 0; 
     Head = Head -> next;
  }
}
void  DisplayProduct(PNODE Head)
{
  int idigit = 0 , iSum = 0;
    int iProduct = 1;
    int temp = 0;
    printf("\n");
    printf("Product of digits are : \t");
  while (Head != NULL)
  {
      temp = (Head -> data);
    while(temp !=0)
    {
      idigit = (temp) % 10;
      if(idigit == 0)
      {
        idigit = 1;
      }
     iProduct = (iProduct * idigit);
     
      temp = temp /10;
    }

    printf("%d\t",iProduct);

    idigit = 0;
    iProduct = 1;
    temp = 0;

    Head = Head -> next;
  }
  
}
void  DisplaySmall(PNODE Head)
{
  int digits = 0 , temp = 0, small = 0;
  while (Head != NULL)
  {
        temp = Head -> data;

          while(temp != 0)
          {
            digits = temp % 10;
                   small  = digits;
              if(digits > small)
              { 

              }
            temp = temp / 10;





            
          }









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
    Reverse(First);
    
    DisplayPallindrome(First);
     
     DisplayProduct(First);

     DisplaySmall(First);
     
     
  return 0;
}