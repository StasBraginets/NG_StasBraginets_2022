#include <iostream>

using namespace std;
int main()
{
    int number;
    short sum = 0, fraction, hash, last_number;

    cout << "Enter the number: ";
    cin >> number;

    last_number = number % 10;
    for (int i = number; i != 0; i /= 10)
    {
        fraction = i % 10;
        hash = i / 10 % 10;

        if (fraction == hash)
        {
            sum += hash;
        }
        else if (hash == 0)
        {
            if (last_number == fraction)
            {
                sum += last_number;
            }
        }
    }

    cout << "The sum of duplicate numbers is: " << sum << endl;

    return 0;
}
