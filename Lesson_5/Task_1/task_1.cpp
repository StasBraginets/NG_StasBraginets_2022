// Output the frame be recursion
#include <iostream>

using namespace std;

void output_frame(short size, short j_iter)
{
    for (short i = 0; i < size; i++)
    {
        if (i == 0 || i == size - 1 || j_iter == 0 || j_iter == size-1)
        {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
    }
    cout << endl;
    if (j_iter != 0)
    {
        output_frame(size, j_iter-1);
    }
}

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
        output_frame(size, size-1);
    }

    return 0;
}
