#include <iostream>
#include <cctype>

using namespace std;

const int MAX_LENGTH = 10;
int main()
{

    double donation[MAX_LENGTH];
    double sum = 0.0;
    int count = 0;
    cout << "请输入donation的值最多十个,按非数字结束"<<endl;

    // 读取计算输入数字总和
    while (count < MAX_LENGTH )
    {
        if (!(cin>>donation[count]))
        {
            break;
        }
        
        sum += donation[count];
        count++;
    }

    // 计算平均值
    double average = (count > 0) ? (sum / count) : 0.0;

    // 统计大于平均值的数字个数
    int aboveAverage = 0;
    for (int i = 0; i < count; i++)
    {
        if (donation[i] > average)
        {
            aboveAverage++;
        }
    }
    cout << "数字的平均值为" << average << endl;
    cout << "数据中有" << aboveAverage << "个数字大大于平均值";
    return 0;
}
