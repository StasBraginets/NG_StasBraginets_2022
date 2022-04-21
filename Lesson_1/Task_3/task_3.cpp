#include <iostream>

using namespace std;
int main()
{
    short age;

    cout << "Enter your age: ";
    cin >> age;

    if (age > 10 && age <= 120)
    {
        short answer;

        cout << "Do you study? (1/0): ";
        cin >> answer;

        if (answer == 1)
        {
            cout << "You are awesome!" << endl;
        }
        else if (answer == 0)
        {
            cout << "Why?" << endl;
        }
    }
    else if (age > 0 && age <= 10)
    {
        cout << "You are already so big!" << endl;
    }
    else
    {
        cout << "Incorrect input!!" << endl;
    }

    return 0;
}
