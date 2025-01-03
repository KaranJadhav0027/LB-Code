/*#######################################################################
  write a program which search Last occurrence of particular element from 
  singly linear linked list.

Input:
Elements of Limk list are :
| 10 |->| 20 |->| 30 |->| 50 |->| 40 |->| 50 |->| 30 |->| 70 |->NULL
Number of element are :8
Enter elements are :30

Output:
Last occurrence of is  position: 7
 
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

int SearchLastOcc(PNODE head,int no)
{
    int iPos = 1;          
    int iLastOcc = -1;     

    while (head != NULL)
    {
        if (head->data == no)
        {
            iLastOcc = iPos; 
        }
        iPos++;
        head = head->next;
    }
    return iLastOcc;


}

int main()
{
    PNODE first =NULL;  
    int iRet=0; 
    int iValue=0;

    InsertFirst(&first,70);
    InsertFirst(&first,30);
    InsertFirst(&first,50);
    InsertFirst(&first,40);
    InsertFirst(&first,50);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    Display (first);
    iRet=Count(first);
    printf("Number of element are :%d\n",iRet);

     printf("Enter elements are :");
     scanf("%d",&iValue);


    iRet = SearchLastOcc(first, iValue);
    if (iRet != -1)
    {
        printf("Last occurrence of  is  position: %d\n", iRet);
    }
    else
    {
        printf("Element %d is not present.\n", iValue);
    }

    return 0;
}