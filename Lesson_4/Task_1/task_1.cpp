// Which of two string is bigger
#include <iostream>
#include <cstring>
#define Size 100

using namespace std;
int main()
{
    char str1[Size];
    char str2[Size];

    cout << "Enter the first string!!" << endl;
    cin.getline(str1, Size);
    cout << "Enter the second string!!" << endl;
    cin.getline(str2, Size);

    // Checking
    if (strlen(str1) > strlen(str2))
    {
        cout << "The first string is bigger!" << endl;
    }
    else
    {
        cout << "The second string is bigger!" << endl;
    }

    return 0;
}
