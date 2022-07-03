//Count the amount of words
#include <iostream>

using namespace std;
int main()
{
    short words = 0, SIZE = 100;
    char str[SIZE];

    cout << "Enter string!" << endl;
    cin.getline(str, SIZE);

    if (str[0] > 'a' && str[0] < 'z')
    {
        words++;
    }

    for (short i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] > 'A' && str[i] < 'Z') && (str[i-1] > 'A' && str[i-1] < 'Z'))
        {
            continue;
        }
        else if ((str[i] == ' ' && (str[i+1] > 'A' && str[i+1] < 'Z'))||
                ((str[i] > 'A' && str[i] < 'Z') && str[i-1] != ' ')||
                (str[i] == ' ' && (str[i+1] > 'a' && str[i+1] < 'z')))
        {
            words++;
        }
    }

    cout << "The amount of words: " << words << endl;

    return 0;
}
