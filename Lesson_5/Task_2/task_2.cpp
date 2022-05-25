/* Array recursion. Find the certain number*/
#include <iostream>

using namespace std;

void certain_num(short num[], short find_num, short number)
{
    if (find_num == 0 && num[find_num] != number)
    {
        cout << "We didn`t find your number!" << endl;
    }
    else if (num[find_num] == number)
    {
        cout << "We found your number!" << endl;
    }
    else
    {
        certain_num(num, find_num - 1, number);
    }

}

int main()
{
    short arr[] = {12, 45, 199, 23, 56, 99};
    short number;

    cout << "Enter the number: ";
    cin >> number;

    certain_num(arr, sizeof(arr)/sizeof(arr[0]) - 1, number);

    return 0;
}
