#include <iostream>

using namespace std;


int Fill_array(double array[], int length)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (!(cin >> array[i]))
            break;
        count++;
    }
    return count;
}

int Show_array(double array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

int Reverse_array(double array[], int length)
{
    int left = 0;
    int right = length - 1;
    int temp;
    while (left < right)
    {
        temp = array[left];
        array[left] = array[right];
        array[right] = temp;
        ++left;
        --right;
    }

    cout << "反转后的数组是:" << endl;
    for (int i = 1; i < length - 1; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}

int main()
{
    const int length = 5;
    double array[length];

    cout << "请输入数字(5个):" << endl;
    int count = Fill_array(array, length);
    cout << "你输入了" << count << "个数字" << endl;

    Show_array(array, length);

    Reverse_array(array, length);

    return 0;
}