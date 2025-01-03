/*#######################################################################
  write a program which return second maximun element from singly linear
  linked list.
Input:
Elements of Limk list are :
| 110 |->| 230 |->| 320 |->| 240 |->NULL
Number of element are :4

Output: 
seconf max of element are :240

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

int SecondMaximum(PNODE head)
{
    int max = -1, secondMax = -1;

    while (head != NULL)
    {
        if (head->data > max)
        {
            secondMax = max; 
            max = head->data; 
        }
        else if (head->data > secondMax && head->data != max)
        {
            secondMax = head->data; 
        }

        head = head->next;
    }

    return secondMax; 
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

    iRet = SecondMaximum(first);
    printf("seconf max of element are :%d\n",iRet);
    
    return 0;
}