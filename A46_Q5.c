/*#######################################################################
  write a program which Display largest of all  element from singly linear
  linked list.
Input:
Elements of Limk list are :
| 11 |->| 250 |->| 532 |->| 419 |->NULL
Number of element are :4
Output:
 1  5  5  9

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

void DisplayLarge(PNODE head)
{
    int iLarge = 0, iDigit = 0;
    while (head != NULL)
    {
       iLarge=0;
        int temp = head->data;

        while (temp != 0)
        {
            iDigit = temp % 10;
            if(iDigit>iLarge)
            {
              iLarge=iDigit;
            }
            temp /= 10;
        }
         
           printf(" %d ", iLarge);
        head = head->next;
    }
    printf("\n"); 
}

int main()
{
    PNODE first =NULL;  
    int iRet=0; 
   
    InsertFirst(&first,419);
    InsertFirst(&first,532);
    InsertFirst(&first,250);
    InsertFirst(&first,11);

    Display (first);
    iRet=Count(first);
    printf("Number of element are :%d\n",iRet);

    DisplayLarge(first);
    
    return 0;
}