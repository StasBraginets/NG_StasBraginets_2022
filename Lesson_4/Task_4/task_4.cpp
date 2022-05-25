//Count the amount of words
#include <iostream>
#include <cctype>

#define SIZE 100
using namespace std;
int main()
{
    char str[SIZE];
    short i = 0, words = 0;

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

    while(str[i] != '\0')
    {
        if ((isspace(str[i]) && isupper(str[i+1]))||
            (isupper(str[i]) && !isspace(str[i-1]))||
            (isspace(str[i]) && islower(str[i+1])))
        {
            words++;
        }

        i++;
    }

    cout << "The amount of words: " << words << endl;

    return 0;
}
