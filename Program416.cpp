#include <iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};

template <class T>
class DoubleyLL
{
public:
   struct node<T> * head;
    int iCount;

    DoubleyLL();
    void InsertFirst(T  no);

    void InsertLast(T no);

    void InsertAtPos(T  no, int ipos);

    void DeleteFirst();

    void DeleteLast();

    void DeleteAtPos(int ipos);

    void Display();

    int Count();
};

template <class T>
DoubleyLL<T>::DoubleyLL()
{
    head = NULL;
    iCount = 0;
}
template <class T>
void DoubleyLL<T>:: InsertFirst(T  no)
{
   struct node<T> *newn = NULL;

    newn = new node<T>;
    newn->data = no;
    newn->next = NULL;

    if (head == NULL)
    {
        head = newn;
    }
    else
    {
        newn->next = head;
        head->prev = newn;
        head = newn;
    }
    iCount++;
}
template <class T>
void DoubleyLL<T>::InsertLast(T  no)
{
   struct node<T> * newn = NULL;
  struct node<T> * temp= NULL;

    newn = new node<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if (head == NULL)
    {
        head = newn;
    }
    else
    {
        temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}
template <class T>
void DoubleyLL<T>::InsertAtPos(T no, int ipos)
{
    int CountNode = 0;
    int i = 0;
    struct node<T> * newn = NULL;
    struct node<T> * temp = NULL;

    CountNode = iCount;

    if ((ipos < 1) || (ipos > CountNode + 1))
    {
        printf("Invalid Position \n");
        return;
    }

    if (ipos == 1)
    {
        InsertFirst(no); 
    }
    else if (ipos == CountNode + 1)
    {
        InsertLast(no); 
    }
    else 
    {
        newn = new node<T>;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = head;

        for (i = 1; i < ipos - 1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        newn->next->prev = newn;

        temp->next = newn;
        temp->prev = temp;
    }
    iCount++;
}
template <class T>
void DoubleyLL<T>::DeleteFirst()
{
    struct node<T> * temp = NULL;

    if (head == NULL)
    {
        return;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = NULL;
    }
    else
    {
        temp = head;

        head = head->next;
        delete temp;
        head->prev = NULL;
    }
    iCount--;
}
template <class T>
void DoubleyLL<T>::DeleteLast()
{
    struct node<T> * temp = NULL;

    if (head == NULL)
    {
        return;
    }
    else if (head->next == NULL)
    {
        delete head;
        head = NULL;
    }
    else
    {
        temp = head;

        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}
template <class T>
void DoubleyLL<T>:: DeleteAtPos(int ipos)
{
    int CountNode = 0;
    int i = 0;

    struct node<T> * temp = NULL;
   struct node<T> * target = NULL;

    CountNode = iCount;

    if ((ipos < 1) || (ipos > CountNode + 1)) // filter
    {
        printf("Invalid Position \n");
        return;
    }

    if (ipos == 1) 
    {
        DeleteFirst(); 
    }
    else if (ipos == CountNode + 1) 
    {
        DeleteLast(); 
    }
    else 
    {
        temp = head;

        for (i = 1; i < ipos - 1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;

        temp->next = target->next;
        temp->next->prev = temp;
        delete (target);
    }
    iCount--;
}
template <class T>
void DoubleyLL<T>:: Display()
{
    struct node<T> * temp = head;

    cout << "Elements of LinkedList are : \n";

    while (temp != NULL)
    {
        cout << "| " << temp->data << " | -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}
template <class T>
int  DoubleyLL<T>::Count()
{
    return iCount;
}

int main()
{
    DoubleyLL <int>dobj;
    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of elements are : " << iRet << "\n";

    cout << "\n";

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();
    iRet = dobj.Count();
    cout << "Number after Last Insert of elements are : " << iRet << "\n";

    cout << "\n";
    dobj.DeleteFirst();
    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of elements After First Delete are : " << iRet << "\n";

    cout << "\n";
    dobj.DeleteLast();
    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of elements  After Last Delete are : " << iRet << "\n";

    cout << "\n";
    dobj.InsertAtPos(75, 3);
    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of elements After Insert At Position are : " << iRet << "\n";

    cout << "\n";
    dobj.DeleteAtPos(3);
    dobj.Display();
    iRet = dobj.Count();
    cout << "Number of elements After Delete at Position are : " << iRet << "\n";

    return 0;
}