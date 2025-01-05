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
class DoublyCL
{
public:
    struct node<T> * head;
    struct node<T> * tail;
    int iCount;

    DoublyCL();

    void InsertFirst(T no);

    void InsertLast(T no);

    void DeleteFirst();

    void DeleteLast();

    void InsertAtPos(T no, int ipos);

    void DeleteAtPos(int ipos);

    void Display();

    int Count();
};
template <class T>
DoublyCL<T>::DoublyCL()
{
    head = NULL;
    tail = NULL;
    iCount = 0;
}
template <class T>
void DoublyCL<T>::InsertFirst(T no)
{
    struct node<T> * newn = NULL;

    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if ((head == NULL) && (tail == NULL))
    {
        head = newn;
        tail = newn;
    }
    else
    {
        newn->next = head;
        head->prev = newn;

        head = newn;
    }
    tail->next = head;
    head->prev = tail;
    iCount++;
}
template <class T>
void DoublyCL<T>::InsertLast(T no)
{
    struct node<T> * newn = NULL;

    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if ((head == NULL) && (tail == NULL))
    {
        head = newn;
        tail = newn;
    }
    else
    {
        tail->next = newn;
        newn->prev = tail;

        tail = newn;
    }
    tail->next = head;
    head->prev = tail;
    iCount++;
}
template <class T>
void DoublyCL<T>::DeleteFirst()
{
    if (head == NULL && tail == NULL)
    {
        return;
    }
    else if (head == tail)
    {
        delete (head);
        head = NULL;
        tail = NULL;
    }
    else
    {
        head = head->next;
        delete (tail->next);

        tail->next = head;
        head->prev = tail;
    }
    iCount--;
}
template <class T>
void DoublyCL<T>::DeleteLast()
{
    if (head == NULL && tail == NULL)
    {
        return;
    }
    else if (head == tail)
    {
        delete (head);
        head = NULL;
        tail = NULL;
    }
    else
    {
        tail = tail->prev;
        delete (tail->next);

        tail->next = head;
        head->prev = tail;
    }
    iCount--;
}
template <class T>
void DoublyCL<T>::InsertAtPos(T no, int ipos)
{

    int i = 0;

    struct node<T> * newn = NULL;
   struct node<T> * temp = NULL;

    if ((ipos < 1) || (ipos > iCount + 1))
    {
        printf("Invalid position\n");
        return;
    }

    if (ipos == 1)
    {
        InsertFirst(no);
    }
    else if (ipos == iCount + 1)
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
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;
        iCount++;
    }
}
template <class T>
void DoublyCL<T>::DeleteAtPos(int ipos)
{

    int i = 0;

    struct node<T> * temp = NULL;

    if ((ipos < 1) || (ipos > iCount))
    {
        printf("Invalid position\n");
        return;
    }

    if (ipos == 1)
    {
        DeleteFirst();
    }
    else if (ipos == iCount)
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

        temp->next = temp->next->next;
        delete (temp->next->prev);
        temp->next->prev = temp;
        iCount--;
    }
}
template <class T>
void DoublyCL<T>::Display()
{
    struct node<T> * temp = head;

    cout << "Elements of LinkedList are : \n";

    do
    {
        cout << "| " << temp->data << " | <=> ";
        temp = temp->next;
    } while (temp != head);
    cout << "\n";
}
template <class T>
int DoublyCL<T>::Count()
{
    return iCount;
}
int main()
{
    DoublyCL <int>obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet = obj.Count();

    cout << "Number of elements are : " << iRet << "\n";

    obj.InsertAtPos(75, 4);

    obj.Display();
    iRet = obj.Count();

    cout << "Number of After Insert At Post elements are : " << iRet << "\n";

    obj.DeleteAtPos(4);

    obj.Display();
    iRet = obj.Count();

    cout << "Number of Delete At Post elements are : " << iRet << "\n";

    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();
    iRet = obj.Count();

    cout << "Number of Delete first And Last elements are : " << iRet << "\n";

    return 0;
}