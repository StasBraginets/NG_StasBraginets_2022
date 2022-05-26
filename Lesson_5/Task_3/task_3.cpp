//Count the amount of words
#include <iostream>
#include <cctype>

#define SIZE 100
using namespace std;

char input_string(char str[]);
void find_word(char str[]);

int main()
{
    char str[SIZE];

    input_string(str);
    find_word(str);

    return 0;
}

char input_string(char str[])
{
    cout << "Enter string!" << endl;
    cin.getline(str, SIZE);

    return str[SIZE];
}

void find_word(char str[])
{
    short i = 0, words = 0;

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
}
