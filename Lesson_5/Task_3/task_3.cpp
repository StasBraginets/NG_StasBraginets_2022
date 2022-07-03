//Count the amount of words
#include <iostream>

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
    short words = 0;

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
}
