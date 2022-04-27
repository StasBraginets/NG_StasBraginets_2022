#include <iostream>

using namespace std;
int main()
{
    int num;
    short sum = 0;

    cout << "Enter the numeric: ";
    cin >> num;

    for (int i = num; i != 0; i /= 10)
    {
        if (i % 10 % 2 == 0)
        {
            sum += i % 10;
        }
    }

    cout << "The sum of the pair number of your numeric is: " << sum << endl;

    return 0;
}
