/*#######################################################################
  write a recursive program which display below pattern.

Input:
Enter the Frequency :
5

Output:
A       B       C       D       E       
#######################################################################*/

#include <iostream>
using namespace std;

class Recursive
{
    public:
    void Display(int iNo)
    {
        static char cCnt ='A';

         if(iNo>27)
        {
            cout<<"enter number below 26";
             return;
        }

        if (cCnt <'A'+iNo)
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