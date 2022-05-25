#include <iostream>

#define SIZE 20

using namespace std;
int main()
{
    int arr_num[SIZE] = {};
    short l = 0, colums = 0, rows = 0;

    for (colums = 0; colums < SIZE; colums++)  // Fill array until 0
    {
        cout << "Enter #" << colums + 1 << " element: ";
        cin >> arr_num[colums];
        if (arr_num[colums] == 0)
        {
            break;
        }
        else if (rows < arr_num[colums])  // Find the biggest element in array
        {
            rows = arr_num[colums];
        }
    }

    while (rows > 0) // Outputing
    {
        for (l = 0; l < colums; l++)
        {
            if (arr_num[l] < 1)
            {
                cout << " ";
                arr_num[l] -= 1;
            }
            else
            {
                cout << "*";
                arr_num[l] -= 1;
            }
        }
        cout << endl;
        rows--;
    }

    return 0;
}
