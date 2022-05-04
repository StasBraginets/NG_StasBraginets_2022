// All vowels that are under the even index
#include <iostream>
#include <cctype>
#include <cstring>

#define Size 100
using namespace std;
int main()
{
    char str[Size];

    cout << "Enter the string!!" << endl;
    cin.getline(str, Size);

    //Checking
    cout << "All vowels that are under the even index!" << endl;
    for (short i = 0; i < strlen(str); i++)
    {
        if ((str[i] == 'a' && i % 2 == 0) || (str[i] == 'e' && i % 2 == 0) ||
            (str[i] == 'i' && i % 2 == 0) || (str[i] == 'o' && i % 2 == 0) ||
            (str[i] == 'u' && i % 2 == 0) || (str[i] == 'y' && i % 2 == 0))
        {
            cout << str[i] << " ";
        }
    }

    return 0;
}
