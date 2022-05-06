// Which of two string is bigger
#include <iostream>
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

    // The length of the first string
    short count_str1 = 0;
    while (str1[count_str1] != '\0')
    {
        count_str1++;
    }

    // The length of the first string
    short count_str2 = 0;
    while (str2[count_str2] != '\0')
    {
        count_str2++;
    }

    // Checking
    if (count_str1 > count_str2)
    {
        cout << "The first string is bigger!" << endl;
    }
    else if (count_str1 == count_str2)
    {
        cout << "They are equal!" << endl;
    }
    else
    {
        cout << "The second string is bigger!" << endl;
    }

    return 0;
}
