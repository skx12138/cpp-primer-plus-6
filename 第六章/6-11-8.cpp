#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string filename;
    cout << "请输入文件名:";
    cin >> filename;
    ifstream file(filename);
    if (!file)
    {
        cerr << "无法打开文件" << endl;
        return 1;
    }

    char ch;
    int charCount = 0;

    while (file.get(ch))
    {
        charCount++;
    }

    cout << "文件包含 " << charCount << " 个字符。" << endl;

    file.close();

    return 0;
}
