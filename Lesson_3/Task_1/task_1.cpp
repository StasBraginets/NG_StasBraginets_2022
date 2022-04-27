#include <iostream>

using namespace std;
int main()
{
    int size = 0, i = 0;
    float num;
    bool is_num = false;

    cout << "Enter size of array (size > 1): ";
    cin >> size;

    float arr[size];

    if (size > 1)
    {
        for (i = 0; i < size; i++)
        {
            cout << "Enter #" << i + 1 << " element: ";
            cin >> arr[i];
        }

        cout << "What number do you want to check? ";
        cin >> num;

        for (i = 0; i < size; i++)
        {
            if (num == arr[i])
            {
                cout << "I know that number!" << endl;
                is_num = true;
                break;
            }
        }
        if (is_num == false)
        {
            cout << "I don`t know that number!" << endl;
        }
    }
    else
    {
        cout << "Wrong input!" << endl;
    }

    return 0;
}
