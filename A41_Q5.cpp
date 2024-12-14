/*#######################################################################
  write a recursive program which display below pattern.

Input:
Enter the Frequency :
9

Output:
a       b       c       d       e       f       g       h       i     

Input:
Enter the Frequency :
77
Output:
enter number below 26
#######################################################################*/

#include <iostream>
using namespace std;

class Recursive
{
    public:
    void Display(int iNo)
    {
        static char cCnt ='a';

        if(iNo>27)
        {
            cout<<"enter number below 26";
             return;
        }

        if (cCnt <'a'+iNo)
        {
            cout <<cCnt<<"\t";
            cCnt++;
            Display(iNo);
        }
    }
};
int main()
{
    int iValue = 0;

    cout << "Enter the Frequency :\n";
    cin >> iValue;
  
    Recursive robj;
    robj.Display(iValue);

    return 0;
}