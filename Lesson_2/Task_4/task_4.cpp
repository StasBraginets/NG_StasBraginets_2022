#include <iostream>

using namespace std;
int main()
{
    int number;

    cout << "Enter number no less that 3: ";
    cin >> number;

    short i, j, k, l;
    l = number / 2;
    if (number > 2 && number % 2 == 0) // if the numeric is pair
    {
        for (j = 1; j < l; j++)
            {
                cout << " ";
            }
            cout << "*";

        for (i = 0; i <= number; i += 2)
        {
            for (j = 1; j <= l; j++)
            {
                cout << " ";
            }

            for (k = i; k > 0; k--)
            {
                cout << "*";
            }

            l--;
            cout << endl;
        }
        for (j = 1; j < number / 2 + 1; j++)
            {
                cout << " ";
            }
            cout << "*";
    }
    else if (number >= 2 && number % 2 != 0) // if the numeric is not pair
    {
        for (i = 1; i <= number; i += 2)
        {
            for (j = 1; j <= l; j++)
            {
                cout << " ";
            }

            for (k = i; k > 0; k--)
            {
                cout << "*";
            }

            l--;
            cout << endl;
        }
        for (j = 1; j < number / 2 + 1; j++)
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
