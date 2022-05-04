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
        else
        {
            cout << "Why?" << endl;
        }
    }
    else
    {
        cout << "You are already so big!" << endl;
    }


    return 0;
}
