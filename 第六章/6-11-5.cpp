#include <iostream>
using namespace std;

int main()
{
    double income;
    double tax = 0.0;

    while (true)
    {
        cout << "请输入你的收入:" << endl;
        if (!(cin >> income) || income < 0)
        {
            break;
        }
        if (income <= 5000)
        {
            cout << "不收税" << endl;
        }
        else if (income <= 15000)
        {
            tax = (income - 5000) * 0.1;
        }
        else if (income <= 35000)
        {
            tax = (income - 15000) * 0.15 + 10000 * 0.1;
        }
        else
        {
            tax = (income - 35000) * 0.2 + 20000 * 0.15 + 10000 * 0.1;
        }
        cout << "所得税为:" << tax << endl;
    }
}