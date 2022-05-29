//Count the amount of words
#include <iostream>
#include <cctype>

#define SIZE 100
using namespace std;
int main()
{
    char str[SIZE];
    short words = 0;

    cout << "Enter string!" << endl;
    cin.getline(str, SIZE);

    if (isalpha(str[0]))
    {
        words++;
        if (isupper(str[0]))
        {
            words--;
        }
    }

    for (short i = 0; str[i] != '\0'; i++)
    {
        if (isupper(str[i]) && isupper(str[i-1]))
        {
            continue;
        }
        else if ((isspace(str[i]) && isupper(str[i+1]))||
                (isupper(str[i]) && !isspace(str[i-1]))||
                (isspace(str[i]) && islower(str[i+1])))
        {
            words++;
        }
    }

    cout << "The amount of words: " << words << endl;

    return 0;
}
