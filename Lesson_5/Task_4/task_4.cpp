#include <iostream>
#include <cmath>

using namespace std;

short question();
void equation(short answer);

int main()
{
    equation(question());

    return 0;
}

short question()
{
    short question_number;
    cout << "We will try to solve the square equation!" << endl
         << "But before we start, do you study at school or at university?" << endl
         << "Input 1 or 2 (School - 1, University - 2): ";
    cin >> question_number;

    return question_number;
}

void equation(short answer)
{
    int a, b, c, D;

    if (answer == 1 || answer == 2)
    {
        cout << "Enter three numbers (a, b, c): ";
        cin >> a >> b >> c;

        cout << "So, your square equation!" << endl
             << a << "x^2 + " << b << "x - " << c << " = 0" << endl;

        D = pow(b, 2) - 4 * a * c;

        if (D > 0)
        {
            cout << "D = " << D << ", D > 0" << endl
                 << "x1 = " << (-b + sqrt(D)) / (2 * a) << endl
                 << "x2 = " << (-b - sqrt(D)) / (2 * a) << endl;
        }
        else if (D == 0)
        {
            cout << "D = " << D << endl;
            if (a == 0)
            {
                cout << "a = 0, and we cannot divided by zero," << endl
                     << "so the equation has no roots" << endl;
            }
            else
            {
               cout << "x = " << -b / (2 * a) << endl;
            }
        }
        else
        {
            if (answer == 1)
            {
                cout << "D = " << D << ", D < 0" << endl
                     << "The equation has no roots!" << endl;
            }
            else
            {
                D += -2 * D;
                cout << "Awesome, you are student!" << endl
                     << "There are roots even if D < 0" << endl
                     << "x1 = " << -b << " + " << sqrt(D) << "i " << " / " << 2 * a << endl
                     << "x2 = " << -b << " - " << sqrt(D) << "i " << " / " << 2 * a << endl;
            }
        }
    }
    else
    {
        cout << "Oh, you inputed incorrectly!!" << endl;
    }
}
