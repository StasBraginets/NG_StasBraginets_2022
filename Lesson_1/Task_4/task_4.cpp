#include <iostream>

using namespace std;
int main()
{
    int price_motherboard, price_videocard, price_CPU, discount, sum_price = 0;

    cout << "Please enter the price in dollars!" << endl;
    cout << "Motherboard price: ";
    cin >> price_motherboard;
    cout << "Videocard price: ";
    cin >> price_videocard;
    cout << "CPU price: ";
    cin >> price_CPU;
    cout << "Discount: ";
    cin >> discount;

    if (price_motherboard < 0 || price_videocard < 0 ||
        price_CPU < 0 || discount < 0)
    {
        cout << "Incorrect input!!" << endl;
    }
    else
    {
        sum_price = price_motherboard + price_videocard + price_CPU;
        sum_price -= sum_price * discount / 100;

        cout << "Your PC will cost - " << sum_price << "$" << endl;
    }

    return 0;
}
