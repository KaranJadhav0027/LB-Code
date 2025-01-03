/*#######################################################################
  write a program which return smallest elements from singly linear linked
  list.

Input:
Elements of Limk list are :
| 110 |->| 230 |->| 20 |->| 240 |->| 640 |->NULL
Number of element are :5
Output:
Smallest element is: 20
 
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

int Minimum(PNODE head)
{
    if (head == NULL) 
    {
        printf("empty list\n");
        return -1; 
    }

    int iMin = head->data; 

    while (head != NULL)
    {
        if (head->data < iMin) 
        {
            iMin= head->data;
        }
        head = head->next;
    }

    return iMin; 


}

int main()
{
    PNODE first =NULL;  
    int iRet=0; 

    InsertFirst(&first,640);
    InsertFirst(&first,240);
    InsertFirst(&first,20);
    InsertFirst(&first,230);
    InsertFirst(&first,110);

    Display (first);
    iRet=Count(first);
    printf("Number of element are :%d\n",iRet);

    iRet = Minimum(first);
    if (iRet != -1)
    {
        printf("Smallest element is: %d\n", iRet);
    }


    return 0;
}