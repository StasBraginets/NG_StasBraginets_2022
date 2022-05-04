/*Two random arrays.
Elements of the first array add to elements of the second array*/
#include <iostream>
#include <ctime>

#define Size 4
int main(void)
{
    using namespace std;

    int arr_num1[Size], arr_num2[Size];
    short i = 0;

    // random number generation
    srand(time(NULL));
    cout << "Your first array is: ";
    for (i = 0; i < Size; i++)
    {
        arr_num1[i] = rand() % 10;
        cout << arr_num1[i] << " ";
    }
    cout << endl;
    cout << "Your second array is: ";
    for (i = 0; i < Size; i++)
    {
        arr_num2[i] = rand() % 10;
        cout << arr_num2[i] << " ";
    }
    cout << endl;

    //The elements of array to integer number
    short x = arr_num1[0] * 1000 + arr_num1[1] * 100 +
              arr_num1[2] * 10 + arr_num1[3];
    short y = arr_num2[0] * 1000 + arr_num2[1] * 100 +
              arr_num2[2] * 10 + arr_num2[3];

    if (x > y)
    {
        cout << x << " > " << y << endl;
    }
    else
    {
        cout << x << " < " << y << endl;
    }

    return 0;
}
