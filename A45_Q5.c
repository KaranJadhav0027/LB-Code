/*#######################################################################
  write a program which return addition od digit of element from singly linear
  linked list.
Input:
Elements of Limk list are :
| 110 |->| 230 |->| 320 |->| 240 |->NULL
Number of element are :4
Output: 
Addition of digits of elements:
2 5 5 6

#######################################################################*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
     int data;
     struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head,int no)
{
    PNODE newn=NULL;

    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if(*head ==NULL)
    {
        *head =newn;
    }
    else
    {
       newn->next=*head;
      *head=newn;
    }
}
void Display (PNODE head)
{
    printf("Elements of Limk list are : \n");

    while(head !=NULL)
    {
        printf("| %d |->",head->data);
        head=head->next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCount =0;

   while(head !=NULL)
    {  
        iCount++;
        head=head->next;
    }
    return iCount;
}

void SumDigit(PNODE head)
{
    int iSum = 0, iDigit = 0;
    int temp = 0;
    printf("Addition of digits of elements:\n");

    while (head != NULL)
    {
        iSum = 0;
        
         temp = head->data;
        while (temp != 0)
        {
            iDigit = temp % 10;
            iSum += iDigit;
            temp /= 10;
        }

        printf("%d ", iSum);
        head = head->next;
    }
    printf("\n"); 
}

int main()
{
    PNODE first =NULL;  
    int iRet=0; 
   
    InsertFirst(&first,240);
    InsertFirst(&first,320);
    InsertFirst(&first,230);
    InsertFirst(&first,110);

    Display (first);
    iRet=Count(first);
    printf("Number of element are :%d\n",iRet);

    SumDigit(first);
    
    return 0;
}