/*
a.编写一个函数，按值传递box结构，并显示每个成员的值。
b. 编写一个函数，传递box结构的地址， 并将volume成员设置为其他三维长度的乘积。
c.编写一个使用这两个函数的简单程序。
*/
#include <iostream>
#include <cstring>
using namespace std;
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void display(const box myBox);
void computeVolume(box *mybox, float height, float width, float length, float volume);

int main()
{
    box mybox;
    strcpy(mybox.maker, "abc");
    mybox.height = 10.0;
    mybox.width = 5.0;
    mybox.length = 8.0;

    computeVolume(&mybox, mybox.height, mybox.width, mybox.length, mybox.volume);
    display(mybox);
}

// 计算体积
void computeVolume(box *mybox, float height, float width, float length, float volume)
{
    mybox->volume = height * width * length;
}

void display(const box mybox)
{
    cout << "制造商:" << mybox.maker << endl
         << "高度:" << mybox.height << endl
         << "宽度:" << mybox.width << endl
         << "长度:" << mybox.length << endl
         << "体积:" << mybox.volume;
}
