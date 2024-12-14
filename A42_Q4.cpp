/*#######################################################################
  write a recursive program which Accept the number from user and return Factorial

Input:
Enter the Number :
879

Output:
Factorial is :120 
#######################################################################*/

#include <iostream>
using namespace std;

class Recursive
{
    public:
    int Fact(int iNo)
    {
        static int iFact=1;

    if(iNo!=0)
    {
       iFact=iFact*iNo;
        iNo--;
      Fact(iNo);
    }
    return iFact;
    }
};
int main()
{
    int iValue = 0;
    int iRet=0;

    cout << "Enter the Number :\n";
    cin >> iValue;
  
    Recursive robj;
    iRet =robj.Fact(iValue);

    cout<<"Factorial is :"<<iRet;

    return 0;
}