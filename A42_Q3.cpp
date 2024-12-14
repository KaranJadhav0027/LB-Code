/*#######################################################################
  write a recursive program which accept string from user and count number of character

Input:
Enter the String :
Hello Ram

Output:
 character count 8    
#######################################################################*/

#include <iostream>
using namespace std;

class Recursive
{
public:
    int Strlen(char *str)
    {
        if (*str == '\0')
        {
            return 0;
        }

        if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
        {

            return 1 + Strlen(str + 1);
        }

        return Strlen(str + 1);
    }
};

int main()
{
    char Arr[30];
    int iRet = 0;

    cout << "Enter the String:\n";
    cin.getline(Arr, 30);

    Recursive robj;
    iRet = robj.Strlen(Arr);

    cout << "Count of Character: " << iRet << endl;

    return 0;
}
