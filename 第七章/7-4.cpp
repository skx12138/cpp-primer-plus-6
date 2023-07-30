#include <iostream>
#include <iomanip>

using namespace std;

// 计算中奖几率
long double probaility(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n = numbers;
    unsigned p = picks;

    for (; p > 0; n--, p--)
    {
        result *= n / p;
    }
    return result;
}

int main()
{
    unsigned totalNumbers; // 域号码总数
    unsigned fieldPicks;   // 域号码选中数
    unsigned specialPick;  // 特选号码选中数
    cout << "请输入域号码总数:" << endl;

    cin >> totalNumbers;
    cout << "请输入域号码选中数:" << endl;
    cin >> fieldPicks;
    cout << "请输入特选号选中数:" << endl;
    cin >> specialPick;

    long double odds = probaility(totalNumbers, fieldPicks) * probaility(totalNumbers, specialPick);
    cout << "中头奖的几率是:" << odds;

    return 0;
}
