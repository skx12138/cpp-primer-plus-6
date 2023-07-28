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
void computeVolume(box *mybox);

int main()
{
    box mybox;
    strcpy(mybox.maker, "abc");
    mybox.height = 10.0;
    mybox.width = 5.0;
    mybox.length = 8.0;

    computeVolume(&mybox);
    display(mybox);

    return 0;
}

void computeVolume(box *mybox)
{
    mybox->volume = mybox->height * mybox->width * mybox->length;
}

void display(const box mybox)
{
    cout << "制造商: " << mybox.maker << endl
         << "高度: " << mybox.height << endl
         << "宽度: " << mybox.width << endl
         << "长度: " << mybox.length << endl
         << "体积: " << mybox.volume << endl;
}
