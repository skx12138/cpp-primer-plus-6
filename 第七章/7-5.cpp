/*
定义一个递归函数，接受一个整数参数，并返回该参数的阶乘。
前面讲过，3的阶乘写作3!，等于3*2!，依此类推；而0!被定义为1。
通用的计算公式是，如果n大于零，则n!=n*（n−1）!。在程序中对
该函数进行测试，程序使用循环让用户输入不同的值，程序将报告这些
值的阶乘。
*/
#include <iostream>
using namespace std;

unsigned long long function(int n)
{
    if (n == 0)
        return 1;
    else
        return n * function(n - 1);
}

int main()
{
    int n;
    while (true)
    {

        cout << "请输入一个数字:";
        cin >> n;
        if (n < 0)
        {
            cout << "请输入非负整数!" << endl;
            continue;
        }
        // 计算阶乘结果
       unsigned long long result = function(n);
        cout << n << "!=" << result << endl;
    }
    return 0;
}