#include <iostream>

using namespace std;
int main()
{
    int number;
    short sum = 0, last_number;

    cout << "Enter the number: ";
    cin >> number;

    last_number = number % 10;
    for (int i = number; i != 0; i /= 10)
    {
        if (i % 10 == i / 10 % 10)
        {
            sum += i / 10 % 10;
        }
        else if (i / 10 % 10 == 0)
        {
            if (last_number == i % 10)
            {
                sum += last_number;
            }
        }
    }

    cout << "The sum of duplicate numbers is: " << sum << endl;

    return 0;
}
