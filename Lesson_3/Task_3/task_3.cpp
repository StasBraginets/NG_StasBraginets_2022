#include <iostream>

#define Size 20

using namespace std;
int main()
{
    int arr_num[Size] = {};
    short i = 0, j = 0, l = 0, the_biggest = 0, rows = 0;

    for (i = 0; i < Size; i++)  // Fill array until 0
    {
        cout << "Enter #" << i + 1 << " element: ";
        cin >> arr_num[i];
        if (arr_num[i] == 0)
        {
            break;
        }
        else if (the_biggest < arr_num[i])  // Find the biggest element in array
        {
            the_biggest = arr_num[i];
        }
        rows++;
    }

    for (i = 0; i < the_biggest; i++)   // Outputing
    {
        for (l = 0; l < rows; l++)
        {
            if (arr_num[l] < 1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }

        for (j = 0; j < rows; j++)
        {
            arr_num[j] -= 1;
        }
        cout << endl;
    }

    return 0;
}
