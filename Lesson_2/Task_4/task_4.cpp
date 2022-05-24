/*Output the snow tree*/
#include <iostream>

using namespace std;
int main()
{
    int number;

    cout << "Enter number no less that 3: ";
    cin >> number;

    short half = number / 2;
    if (number > 2) // if the numeric is pair
    {
        for (short i = 0; i <= number; i += 2)
        {
            for (short j = 1; j < half; j++)
            {
                cout << " ";
            }
            if (i == 0)
            {
                cout << "*";
                cout << endl;
                continue;
            }
            for (short k = i; k > 0; k--)
            {
                cout << "*";
            }
            half--;
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
