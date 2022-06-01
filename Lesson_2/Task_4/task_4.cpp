/*Output the snow tree*/
#include <iostream>

using namespace std;
int main()
{
    int number;

    cout << "Enter number no less that 3: ";
    cin >> number;

    if (number > 2) // if the numeric is pair
    {
        for (short i = 0; i <= number / 2; i++)
        {
            for (short j = number / 2; j > i; j--)
            {
                if (i == 0 && j == 1)
                {
                    cout << "*";
                    continue;
                }
                cout << " ";
            }
            for (short k = 0; k <= 2 * i - 1; k++)
            {
                cout << "*";
            }
            cout << endl;
        }
        for (short j = 1; j < number / 2 + 1; j++)
        {
            cout << " ";
        }
        cout << "*";
    }
    else
    {
        cout << "It is wrong input!!" << endl;
    }

    return 0;
}
