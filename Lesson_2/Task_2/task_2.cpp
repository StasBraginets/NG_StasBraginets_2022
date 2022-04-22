#include <iostream>

using namespace std;
int main()
{
    int num;
    short fraction, sum = 0;

    cout << "Enter the numeric: ";
    cin >> num;

    for (int i = num; i != 0; i /= 10)
    {
        fraction = i % 10;
        if (fraction % 2 == 0)
        {
            sum += fraction;
        }
    }

    cout << "The sum of the pair number of your numeric is: " << sum << endl;

    return 0;
}
