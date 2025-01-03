/*#######################################################################
  write a program which return largest elements from singly linear linked
  list.

Input:
Elements of Limk list are :
| 110 |->| 230 |->| 320 |->| 240 |->NULL
Number of element are :4
Output:
Largest element is: 320
 
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

int Maximum(PNODE head)
{
    if (head == NULL) 
    {
        printf("empty list\n");
        return -1; 
    }

    int iMax = head->data; 

    while (head != NULL)
    {
        if (head->data > iMax) 
        {
            iMax = head->data;
        }
        head = head->next;
    }

    return iMax; 

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

    iRet = Maximum(first);
    if (iRet != -1)
    {
        printf("Largest element is: %d\n", iRet);
    }

    return 0;
}