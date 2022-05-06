// All vowels that are under the even index
#include <iostream>

#define Size 100
using namespace std;
int main()
{
    char str[Size];

    cout << "Enter the string!!" << endl;
    cin.getline(str, Size);

    //Checking
    cout << "All vowels that are under the even index!" << endl;
    short iter_str = 0;
    while (str[iter_str] != '\0')
    {
        if ((str[iter_str] == 'a' && iter_str % 2 == 0) || (str[iter_str] == 'e' && iter_str % 2 == 0) ||
            (str[iter_str] == 'i' && iter_str % 2 == 0) || (str[iter_str] == 'o' && iter_str % 2 == 0) ||
            (str[iter_str] == 'u' && iter_str % 2 == 0) || (str[iter_str] == 'y' && iter_str % 2 == 0))
        {
            cout << str[iter_str] << " ";
        }
        iter_str++;
    }

    return 0;
}
