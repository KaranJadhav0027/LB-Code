/*#######################################################################
  write a program which return addition  all elements from singly linear
  linked list.

Input:
Elements of Limk list are :
| 10 |->| 20 |->| 30 |->| 40 |->NULL
 
Output:
Number of element are :4
Addition of all elements is: 100
 
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

int Addition(PNODE head)
{
    
    int iSum = 0; 
    while (head != NULL)
    {
        iSum =iSum+ head->data;
        head = head->next;  
    }

    return iSum;

}

int main()
{
    PNODE first =NULL;  
    int iRet=0; 

    InsertFirst(&first,40);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    Display (first);
    iRet=Count(first);
    printf("Number of element are :%d\n",iRet);
 
    iRet = Addition(first);
    printf("Addition of all elements is: %d\n", iRet);

    return 0;
}