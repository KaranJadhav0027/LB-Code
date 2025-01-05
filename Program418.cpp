#include <iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyCL
{
public:
    struct node<T> * head;
    struct node<T> * tail;
    int iCount;

    SinglyCL();

    void InsertFirst(T no);

    void InsertLast(T no);

    void DeleteFirst();

    void DeleteLast();

    void Display();

    int Count();

    void InsertAtPos(T no, int ipos);

    void DeleteAtPos(int ipos);
};
template <class T>
SinglyCL<T>::SinglyCL()
{
    head = NULL;
    tail = NULL;
    iCount = 0;
}
template <class T>
void SinglyCL<T>::InsertFirst(T no)
{
   struct node<T> * newn = NULL;

    newn = new node<T>;
    newn->data = no;
    newn->next = NULL;

    if ((head == NULL) && (tail == NULL)) // LL is empty
    {
        head = newn;
        tail = newn;
    }
    else
    {
        newn->next = head;
        head = newn;
    }
    tail->next = head;
    iCount++;
}
template <class T>
void SinglyCL<T>::InsertLast(T no)
{
    struct node<T> * newn = NULL;

    newn = new node<T>;
    newn->data = no;
    newn->next = NULL;

    if ((head == NULL) && (tail == NULL)) // LL is empty
    {
        head = newn;
        tail = newn;
    }
    else
    {
        tail->next = newn;
        tail = newn;
    }
    tail->next = head;
    iCount++;
}
template <class T>
void SinglyCL<T>::DeleteFirst()
{
    struct node<T> * temp = NULL;
    if ((head == NULL) && (tail == NULL))
    {
        return;
    }
    else if (head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        temp = head;

        head = head->next;
        delete (temp);
        tail->next = head;
    }
    iCount--;
}
template <class T>
void SinglyCL<T>::DeleteLast()
{
   struct node<T> * temp = NULL;
    if ((head == NULL) && (tail == NULL))
    {
        return;
    }
    else if (head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        temp = head;

        while (temp->next != tail)
        {
            temp = temp->next;
        }

        delete (temp->next);
        tail = temp;
        tail->next = head;
    }
    iCount--;
}
template <class T>
void SinglyCL<T>::Display()
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
int SinglyCL<T>::Count()
{
    return iCount;
}
template <class T>
void SinglyCL<T>::InsertAtPos(T no, int ipos)
{

    int i = 0;

    struct node<T> * newn = NULL;
   struct node<T> * temp = NULL;

    if (ipos < 1 || ipos > iCount + 1)
    {
        printf("Invalid position \n");
        return;
    }

    if (ipos == 1)
    {
        InsertFirst(no);
    }
    else if (ipos == iCount)
    {
        InsertLast(no);
    }
    else
    {
        newn = new node<T>;
        newn->data = no;
        newn->next = NULL;

        temp = head;

        for (i = 1; i < ipos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;

        temp->next = newn;
        iCount++;
    }
}
template <class T>
void SinglyCL<T>::DeleteAtPos(int ipos)
{
    int iCount = 0;
    int i = 0;

   struct node<T> * temp = NULL;
    struct node<T> * target = NULL;

    iCount = Count();

    if (ipos < 1 || ipos > iCount + 1)
    {
        printf("Invalid position \n");
        return;
    }

    if (ipos == 1)
    {
        DeleteFirst();
    }
    else if (ipos == iCount + 1)
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
        iCount--;
        delete (target);
    }
}
int main()
{
    SinglyCL <int>obj;
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