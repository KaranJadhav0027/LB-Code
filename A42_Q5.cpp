/*#######################################################################
  write a recursive program which Accept the number from user and return Multiplication of its digit.

Input:
Enter the Number :
523

Output:
Digit multi is :30   
#######################################################################*/

#include <iostream>
using namespace std;

class Recursive
{
    public:
    int Sum(int iNo)
    {
        static int iSum=1;

    if(iNo!=0)
    {
       iSum=iSum*(iNo%10);
        iNo=iNo/10;
      Sum(iNo);
    }
    return iSum;
    }
};
int main()
{
    int iValue = 0;
    int iRet=0;

    cout << "Enter the Number :\n";
    cin >> iValue;
  
    Recursive robj;
    iRet =robj.Sum(iValue);

    cout<<"Digit multi is :"<<iRet;

    return 0;
}