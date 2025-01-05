#include <iostream>
using namespace std;
template <class T>
struct node
{
    T data;
    struct node *next;
};
template <class T>
class stack
{
public:
    struct node<T> * head;
    int iCount;

    stack();

    void push(T no); // InsertFirst

    int pop(); // DeleteFirst

    void Disply();

    int Count();
};
template <class T>
stack<T>::stack()
{
    head = NULL;
    iCount = 0;
}
template <class T>
void stack<T>::push(T no) // InsertFirst
{
    struct node<T> * newn = NULL;

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
        head = newn;
    }
    iCount++;
}
template <class T>
int stack<T>::pop() // DeleteFirst
{
    int no = -1;
    struct node<T> * temp = NULL;

    if (head == NULL)
    {
        cout << "Stack is empty\n";
        return -1;
    }
    else if (head->next == NULL)
    {
        no = head->data;
        delete head;
        head = NULL;
    }
    else
    {
        no = head->data;
        temp = head;
        head = head->next;
        delete temp;
    }
    iCount--;
    return no;
}
template <class T>
void stack<T>::Disply()
{
    cout << "Elements of stack are : \n";
    struct node<T> * temp = head;

    while (temp != NULL)
    {
        cout << "| " << temp->data << " |\n";
        temp = temp->next;
    }
}
template <class T>
int stack<T>::Count()
{
    return iCount;
}

int main()
{
    stack <int>sobj;
    int iRet = 0;

    sobj.push(101);
    sobj.push(51);
    sobj.push(21);
    sobj.push(11);

    sobj.Disply();
    iRet = sobj.Count();
    cout << "Number of elements are : " << iRet << "\n";

    iRet = sobj.pop();
    cout << "Poped element is : " << iRet << "\n";

    iRet = sobj.pop();
    cout << "Poped element is : " << iRet << "\n";

    sobj.Disply();
    iRet = sobj.Count();
    cout << "Number of elements are : " << iRet << "\n";

    return 0;
}