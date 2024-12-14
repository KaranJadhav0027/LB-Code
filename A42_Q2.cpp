/*#######################################################################
  write a recursive program which Accept the number from user and return Summation of its digit.

Input:
Enter the Number :
879

Output:
Digit sum is :24    
#######################################################################*/

#include <iostream>
using namespace std;

class Recursive
{
    public:
    int Sum(int iNo)
    {
        static int iSum=0;

    if(iNo!=0)
    {
       iSum=iSum+(iNo%10);
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

    cout<<"Digit sum is :"<<iRet;

    return 0;
}