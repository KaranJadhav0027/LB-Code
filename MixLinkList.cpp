#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public:
        PNODE head;
        int iCount;

        SinglyLL()
        {
            head = NULL;
            iCount = 0;
        }

        void InsertFirst(int no)
        {
            PNODE newn = NULL;

            newn = new NODE;    
            newn->data = no;
            newn->next = NULL;

            if(head == NULL)
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

        void InsertLast(int no)
        {
            PNODE newn = NULL;
            PNODE temp = NULL;

            newn = new NODE;   
            newn->data = no;
            newn->next = NULL;

            if(head == NULL)
            {
                head = newn;
            }
            else
            {
                temp = head;

                while(temp -> next != NULL)
                {
                    temp = temp -> next;
                }

                temp->next = newn;
            }
            iCount++;
        }
        
        void InsertAtPos(int no , int ipos)
        {
            int i = 0;
            PNODE newn = NULL;
            PNODE temp = NULL;

            if((ipos < 1) || (ipos > iCount+1))
            {
                cout<<"Invalid position\n";
                return;
            }

            if(ipos == 1)
            {
                InsertFirst(no);
            }
            else if(ipos == iCount + 1)
            {
                InsertLast(no);
            }
            else
            {
                newn = new NODE;
                newn->data = no;
                newn->next = NULL;

                temp = head;

                for(i =1; i< ipos -1; i++)
                {
                    temp = temp->next;
                }

                newn->next = temp->next;
                temp->next = newn;

                iCount++;
            }

        }

        void DeleteFirst()
        {
            PNODE temp = NULL;

            if(head == NULL)
            {
                return;
            }
            else if(head->next == NULL)
            {
                delete head;
                head = NULL;
            }
            else
            {
                temp = head;

                head = head -> next;
                delete temp;
                
            }
            iCount--;
        }
        
        void DeleteLast()
        {
            PNODE temp = NULL;

            if(head == NULL)
            {
                return;
            }
            else if(head->next == NULL)
            {
                delete head;
                head = NULL;
            }
            else
            {
                temp = head;

                while(temp->next->next != NULL)
                {
                    temp = temp -> next;
                }

                delete temp->next;
                temp->next = NULL;
            }
            iCount--;
        }
        
        void DeleteAtPos(int ipos)
        {
            int i = 0;
            PNODE temp = NULL;
            PNODE target = NULL;

            if((ipos < 1) || (ipos > iCount))
            {
                cout<<"Invalid position\n";
                return;
            }

            if(ipos == 1)
            {
                DeleteFirst();
            }
            else if(ipos == iCount)
            {
                DeleteLast();
            }
            else
            {
                temp = head;

                for(i =1; i< ipos -1; i++)
                {
                    temp = temp->next;
                }

                target = temp->next;

                temp -> next = target->next;
                delete target;

                iCount--;
            }


        }

        void Display()
        {
            PNODE temp = head;

            cout<<"Elements of LinkedList are : \n";

            while(temp != NULL)
            {
                cout<<"| "<<temp->data<<" | -> ";
                temp = temp -> next;
            }

            cout<<"NULL\n";
        }
        
        int Count()
        {
            return iCount;
        }
};
class DoubleyLL
{
public:
    PNODE head;
    int iCount;

    DoubleyLL()
    {
        head = NULL;
        iCount = 0;
    }

    void InsertFirst(int no)
    {
        PNODE newn = NULL;

        newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        if (head == NULL)
        {
            head = newn;
        }
        else
        {
            newn->next = head;
            head->prev=newn;
            head = newn;
        }
        iCount++;
    }

    void InsertLast(int no)
    {
        PNODE newn = NULL;
        PNODE temp = NULL;

        newn = new NODE;
        newn->data = no;
        newn->next = NULL;
        newn->prev=NULL;

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
             newn->prev=temp;
        }
        iCount++;
    }

    void InsertAtPos(int no, int ipos)
    {
        int CountNode = 0;
        int i = 0;
        PNODE newn = NULL;
        PNODE temp = NULL;

        CountNode=iCount;

        if ((ipos < 1) || (ipos > CountNode + 1)) 
        {
            printf("Invalid Position \n");
            return;
        }

        if (ipos == 1) 
        {
            InsertFirst(no); // call  insert first function
        }
        else if (ipos == CountNode + 1) 
        {
            InsertLast(no); // call  insert last function
        }
        else // insert in between position
        {
            newn = (PNODE)malloc(sizeof(NODE));
            newn->data = no;
            newn->next = NULL;
            newn->prev=NULL;

            temp = head;

            for (i = 1; i < ipos - 1; i++)
            {
                temp = temp->next;
            }
            newn->next = temp->next;
            newn->next->prev=newn;

            temp->next = newn;
            temp->prev=temp;
        }
        iCount++;
    }

    void DeleteFirst()
    {
        PNODE temp = NULL;

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
            head->prev=NULL;
        }
        iCount--;
    }

    void DeleteLast()
    {
        PNODE temp = NULL;

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

    void DeleteAtPos(int ipos) 
    { 
        int CountNode=0;
         int i=0;

   PNODE temp=NULL;
   PNODE target=NULL;

   CountNode=iCount;

   if((ipos <1) || (ipos > CountNode+1))   //filter
   {
    printf("Invalid Position \n");
    return ;
   }

   if(ipos==1)                        //pos =1
   {
      DeleteFirst();  //call   Delete first function
   }
   else if(ipos==CountNode+1)      //pos =2
   { 
      DeleteLast();            //call  Delete last function
   }
   else                            //Delete in between position
   {
        temp=head;

        for(i=1;i<ipos-1;i++)
        {
            temp=temp->next;
        }

        target=temp->next;
  
        temp->next=target->next;
        temp->next->prev=temp;
        delete (target);
   }
        iCount--;
    }

    void Display()
    {
        PNODE temp = head;

        cout << "Elements of LinkedList are : \n";

        while (temp != NULL)
        {
            cout << "| " << temp->data << " | -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }

    int Count()
    {
        return iCount;
    }
};
class SinglyCL
{
public:
  PNODE head;
  PNODE tail;
  int iCount;

  SinglyCL()
  {
    head = NULL;
    tail = NULL;
    iCount = 0;
  }

  void InsertFirst(int no)
  {
    PNODE newn = NULL;

    newn = new NODE;
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
  void InsertLast(int no)
  {
    PNODE newn = NULL;

    newn = new NODE;
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

  void DeleteFirst()
  {
    PNODE temp = NULL;
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
  void DeleteLast()
  {
    PNODE temp = NULL;
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
  void Display()
  {
    PNODE temp = head;

    cout << "Elements of LinkedList are : \n";

    do
    {
      cout << "| " << temp->data << " | <=> ";
      temp = temp->next;
    } while (temp != head);
    cout << "\n";
  }
  int Count()
  {
    return iCount;
  }
  void InsertAtPos(int no, int ipos)
  {

    int i = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;

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
      newn = new NODE;
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

  void DeleteAtPos(int ipos)
  {
    int iCount = 0;
    int i = 0;

    PNODE temp = NULL;
    PNODE target = NULL;

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
};
class DoublyCL
{
public:
    PNODE head;
    PNODE tail;
    int iCount;

    DoublyCL()
    {
        head = NULL;
        tail = NULL;
        iCount = 0;
    }

    void InsertFirst(int no)
    {
        PNODE newn = NULL;

        newn = new NODE;

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
    void InsertLast(int no)
    {
        PNODE newn = NULL;

        newn = new NODE;

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

    void DeleteFirst()
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
    void DeleteLast()
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

    void InsertAtPos(int no, int ipos)
    {

        int i = 0;

        PNODE newn = NULL;
        PNODE temp = NULL;

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
            newn = new NODE;

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
    void DeleteAtPos(int ipos)
    {

        int i = 0;

        PNODE temp = NULL;

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

    void Display()
    {
        PNODE temp = head;

        cout << "Elements of LinkedList are : \n";

        do
        {
            cout << "| " << temp->data << " | <=> ";
            temp = temp->next;
        } while (temp != head);
        cout << "\n";
    }
    int Count()
    {
        return iCount;
    }
};

class CallLinkList 
{
public:
    void call()
    {
        SinglyLL singlyLL;
        DoubleyLL doublyLL;
        SinglyCL singlyCL;
        DoublyCL doublyCL;

        int choice = 0;
        int listType = 0;
        int value = 0, pos = 0;

        while (true)
        {
            cout << "\nSelect Linked List Type:\n";
            cout << "1. Singly Linked List\n";
            cout << "2. Doubly Linked List\n";
            cout << "3. Singly Circular Linked List\n";
            cout << "4. Doubly Circular Linked List\n";
            cout << "5. Exit\n";
            cout << "Enter your choice: ";
            cin >> listType;

            if (listType == 5)
            {
                cout << "Exiting the program.\n";
                break;
            }

            cout << "\nSelect Operation:\n";
            cout << "1. Insert First\n";
            cout << "2. Insert Last\n";
            cout << "3. Insert at Position\n";
            cout << "4. Delete First\n";
            cout << "5. Delete Last\n";
            cout << "6. Delete at Position\n";
            cout << "7. Display List\n";
            cout << "8. Count Elements\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1: // Insert First
                cout << "Enter the value to insert: ";
                cin >> value;
                if (listType == 1)
                    singlyLL.InsertFirst(value);
                else if (listType == 2)
                    doublyLL.InsertFirst(value);
                else if (listType == 3)
                    singlyCL.InsertFirst(value);
                else if (listType == 4)
                    doublyCL.InsertFirst(value);
                break;

            case 2: // Insert Last
                cout << "Enter the value to insert: ";
                cin >> value;
                if (listType == 1)
                    singlyLL.InsertLast(value);
                else if (listType == 2)
                    doublyLL.InsertLast(value);
                else if (listType == 3)
                    singlyCL.InsertLast(value);
                else if (listType == 4)
                    doublyCL.InsertLast(value);
                break;

            case 3: // Insert at Position
                cout << "Enter the value to insert: ";
                cin >> value;
                cout << "Enter the position: ";
                cin >> pos;
                if (listType == 1)
                    singlyLL.InsertAtPos(value, pos);
                else if (listType == 2)
                    doublyLL.InsertAtPos(value, pos);
                else if (listType == 3)
                    singlyCL.InsertAtPos(value, pos);
                else if (listType == 4)
                    doublyCL.InsertAtPos(value, pos);
                break;

            case 4: // Delete First
                if (listType == 1)
                    singlyLL.DeleteFirst();
                else if (listType == 2)
                    doublyLL.DeleteFirst();
                else if (listType == 3)
                    singlyCL.DeleteFirst();
                else if (listType == 4)
                    doublyCL.DeleteFirst();
                break;

            case 5: // Delete Last
                if (listType == 1)
                    singlyLL.DeleteLast();
                else if (listType == 2)
                    doublyLL.DeleteLast();
                else if (listType == 3)
                    singlyCL.DeleteLast();
                else if (listType == 4)
                    doublyCL.DeleteLast();
                break;

            case 6: // Delete at Position
                cout << "Enter the position: ";
                cin >> pos;
                if (listType == 1)
                    singlyLL.DeleteAtPos(pos);
                else if (listType == 2)
                    doublyLL.DeleteAtPos(pos);
                else if (listType == 3)
                    singlyCL.DeleteAtPos(pos);
                else if (listType == 4)
                    doublyCL.DeleteAtPos(pos);
                break;

            case 7: // Display List
                if (listType == 1)
                    singlyLL.Display();
                else if (listType == 2)
                    doublyLL.Display();
                else if (listType == 3)
                    singlyCL.Display();
                else if (listType == 4)
                    doublyCL.Display();
                break;

            case 8: // Count Elements
                if (listType == 1)
                    cout << "Number of elements: " << singlyLL.Count() << endl;
                else if (listType == 2)
                    cout << "Number of elements: " << doublyLL.Count() << endl;
                else if (listType == 3)
                    cout << "Number of elements: " << singlyCL.Count() << endl;
                else if (listType == 4)
                    cout << "Number of elements: " << doublyCL.Count() << endl;
                break;

            default:
                cout << "Invalid operation choice.\n";
                break;
            }
        }
    }
};



int main()
{
    CallLinkList cobj;

    cobj.call();

    return 0;
}