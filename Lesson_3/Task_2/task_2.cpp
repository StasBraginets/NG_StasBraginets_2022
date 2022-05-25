/*Two random arrays.
Elements of the first array add to elements of the second array*/
#include <iostream>
#include <ctime>

#define Size 4
int main(void)
{
    using namespace std;

    int arr_num1[Size], arr_num2[Size];

    // random number generation
    srand(time(NULL));
    cout << "Your first array is: ";
    for (short i = 0; i < Size; i++)
    {
        arr_num1[i] = rand() % 10;
        cout << arr_num1[i] << " ";
    }
    cout << endl;
    cout << "Your second array is: ";
    for (short i = 0; i < Size; i++)
    {
        arr_num2[i] = rand() % 10;
        cout << arr_num2[i] << " ";
    }
    cout << endl;

    //The elements of array to integer number
    short x = 0, y = 0;
    for (short i = Size-1, j = 1; i >= 0; i--, j *= 10)
    {
        x += arr_num1[i] * j;
        y += arr_num2[i] * j;
    }

    //Checking
    if (x > y)
    {
        cout << x << " > " << y << endl;
    }
    else if (x == y)
    {
        cout << x << " = " << y << endl;
    }
    else
    {
        cout << x << " < " << y << endl;
    }

    return 0;
}
