/*#######################################################################
  write a program which Display all palindrom of element from singly linear
  linked list.
Input:
Elements of Limk list are :
| 11 |->| 28 |->| 17 |->| 414 |->| 6 |->| 89 |->NULL
Number of element are :6
Output: 
| 11 |->| 414 |->| 6 |->NULL

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

void DisplayPallindrome(PNODE head)
{
    int iRev = 0, iDigit = 0;
    while (head != NULL)
    {
        iRev = 0;
        int temp = head->data;

        while (temp != 0)
        {
            iDigit = temp % 10;
              iRev=iRev*10+iDigit;
            temp /= 10;
        }
         if(head->data==iRev)
        { 
           printf("| %d |->", iRev);
        }
        head = head->next;
    }
    printf("NULL\n"); 
}

int main()
{
    PNODE first =NULL;  
    int iRet=0; 
   
    InsertFirst(&first,89);
    InsertFirst(&first,6);
    InsertFirst(&first,414);
    InsertFirst(&first,17);
    InsertFirst(&first,28);
    InsertFirst(&first,11);

    Display (first);
    iRet=Count(first);
    printf("Number of element are :%d\n",iRet);

    DisplayPallindrome(first);
    
    return 0;
}