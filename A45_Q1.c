/*#######################################################################
  write a program which Display all elements which are perfect from singly
  linear linked list

Input:
Elements of Limk list are :
| 11 |->| 28 |->| 17 |->| 41 |->| 6 |->| 89 |->NULL
Number of element are :6

Output:
Perfect numbers in the linked list are:
28 6

#######################################################################*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;

    if (*head == NULL)
    {
        *head = newn;
    }
    else
    {
        newn->next = *head;
        *head = newn;
    }
}
void Display(PNODE head)
{
    printf("Elements of Limk list are : \n");

    while (head != NULL)
    {
        printf("| %d |->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCount = 0;

    while (head != NULL)
    {
        iCount++;
        head = head->next;
    }
    return iCount;
}

int DisplayPerfect(PNODE head)
{
    int iSum = 0, iCnt = 0;

    printf("Perfect numbers in the linked list are:\n");

    while (head != NULL)
    {
        iSum = 0;

        for (iCnt = 1; iCnt <= (head->data / 2); iCnt++)
        {
            if (head->data % iCnt == 0)
            {
                iSum += iCnt;
            }
        }

        if (iSum == head->data)
        {
            printf("%d ", head->data);
        }

        head = head->next;
    }
    printf("\n");
}

int main()
{
    PNODE first = NULL;
    int iRet = 0;

    InsertFirst(&first, 88);
    InsertFirst(&first, 6);
    InsertFirst(&first, 41);
    InsertFirst(&first, 17);
    InsertFirst(&first, 28);
    InsertFirst(&first, 11);

    Display(first);
    iRet = Count(first);
    printf("Number of element are :%d\n", iRet);

    DisplayPerfect(first);

    return 0;
}