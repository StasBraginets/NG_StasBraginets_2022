#include <iostream>

using namespace std;
int main()
{
    short size;

    cout << "To see the square, you should enter"
         << " the number not less than 3!!" << endl;
    cout << "Input the size of the square: ";
    cin >> size;

    if (size < 3)
    {
        cout << "You`ve entered the number less than 3." << endl
             << "Program terminated!" << endl;
    }
    else
    {
        short i = 0, j = 0;
        for (i = 0; i < size; i++)
        {
            cout << "*";
        }
        cout << endl;

        for (i = 0; i < size - 2; i++)
        {
            cout << "*";
            for (j = 0; j < size - 2; j++)
            {
                cout << " ";
            }
            cout << "*" << endl;
        }

        for (i = 0; i < size; i++)
        {
            cout << "*";
        }
    }

    return 0;
}
