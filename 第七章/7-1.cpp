#include <iostream>
#include <string>
using namespace std;

double average(double x, double y)
{
    double mean = 2.0 * x * y / (x + y);
    return mean;
}
int main()
{
    double x, y;
    while (true)
    {
        cout << "请输入第一个数:";
        cin >> x;
        cout << "请输入第二个数:";
        cin >> y;
        double result = average(x, y);
        cout << "调和平均数为:" << result << endl;
    }

    return 0;
}
