/*#######################################################################
  write a program which Display Smallest os all  element from singly linear
  linked list.
Input:
Elements of Limk list are :
| 11 |->| 20 |->| 32 |->| 41 |->NULL
Number of element are :4
Output: 
 1  0  2  1

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

void DisplaySmall(PNODE head)
{
    int iSmall = 0, iDigit = 0;
    while (head != NULL)
    {
       iSmall=9;
        int temp = head->data;

        while (temp != 0)
        {
            iDigit = temp % 10;
            if(iDigit<iSmall)
            {
              iSmall=iDigit;
            }
            temp /= 10;
        }
         
           printf(" %d ", iSmall);
        head = head->next;
    }
    printf("\n"); 
}

int main()
{
    PNODE first =NULL;  
    int iRet=0; 
   
    InsertFirst(&first,41);
    InsertFirst(&first,32);
    InsertFirst(&first,20);
    InsertFirst(&first,11);

    Display (first);
    iRet=Count(first);
    printf("Number of element are :%d\n",iRet);

    DisplaySmall(first);
    
    return 0;
}