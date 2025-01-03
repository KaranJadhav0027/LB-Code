/*#######################################################################
  write a program which Display all elements which are prime from singly
  linear linked list

Input:
Elements of Limk list are :
| 11 |->| 28 |->| 17 |->| 41 |->| 6 |->| 89 |->NULL
Number of element are :6

Output: 
Prime numbers in the linked list are:
11 17 41 89

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

void DisplayPrime(PNODE head)
{
    int iCnt=0, isPrime=0;

    printf("Prime numbers in the linked list are:\n");

    while (head != NULL)
    {
        if (head->data > 1) 
        {
            isPrime = 1; 
            for (iCnt = 2; iCnt <= head->data / 2; iCnt++)
            {
                if (head->data % iCnt == 0)
                {
                    isPrime = 0; 
                    break;
                }
            }
            if (isPrime)
            {
                printf("%d ", head->data);
            }
        }
        head = head->next;
    }
    printf("\n");
}

int main()
{
    PNODE first =NULL;  
    int iRet=0; 
   
    InsertFirst(&first,89);
    InsertFirst(&first,6);
    InsertFirst(&first,41);
    InsertFirst(&first,17);
    InsertFirst(&first,28);
    InsertFirst(&first,11);

    Display (first);
    iRet=Count(first);
    printf("Number of element are :%d\n",iRet);

    DisplayPrime(first);
    
    return 0;
}