
/*加入Benevolent Order of Programmer后,在BOP大会上,人们便可以通过加入者的真实姓名、头衔或秘密BOP姓名来了解他。
编写程序,可以使用真实姓名、头衔、秘密姓名或成员偏好来列出成员。使用如下结构：
struct bop{
char fullname[strsize];//real name

char title[strsize];//job title

char bopname[strsize];//secret BOP name

int preference;//0=fullname,1=title,2=bopname
};
该程序创建一个由上述结构组成的小型数组,并将其初始化为适当的值。另外,该程序使用一个循环,让用户在下面的选项中进行选择：
a.display by name b.display by title
c.display by bopname d.display by preference
q.quit
注意:"display by preference"并不意味着显示成员的偏好,而是意味着根据成员的偏好列出成员。
例如,如果偏好号为1,则选择d将显示程序员头衔。运行情况:
Benevolent Qrder of Programmers Report
a.display by name b.display by title
c.display by bopname d.display by preference
q.quit
Enter your choice:a
Wimp Macho
MIPS
Analyst Trainee
LOOPY
Next choice:q
Bye!
*/

#include <iostream>
using namespace std;

const int strsize = 80;

struct bop
{
    char fullname[strsize]; // 真实姓名
    char title[strsize];    // 工作主题
    char bopname[strsize];  // BOP的姓名
    int preference;         // 0 = fullname, 1 = title, 2 = bopname
};
int main()
{
    bop people[5]{
        {"Wimp Macho", "null", "null", 0},
        {"Raki Rhodes", "Junior Programmer", "null", 1},
        {"Celia Laiter", "null", "MIPS", 2},
        {"Hoppy Hipman", "Analyst Trainee", "null", 1},
        {"Pat Hand", "null", "LOOPY", 2}

    };

    cout << "请选择" << endl
         << "a.display by name\t"
         << "b.display by title\n"
         << "c.display by bopname\t"
         << "d.display by preference\n"
         << "q.quit\n"
         << "输入选项 : ";

    char ch;
    cin >> ch;
    while (ch != 'q')
    {
        switch (ch)
        {
        case 'a':
            for (int i = 0; i < 5; i++)
            {
                cout << people[i].fullname << endl;
            }

            break;
        case 'b':
            for (int i = 0; i < 5; i++)
            {
                cout << people[i].title << endl;
            }
            break;
        case 'c':
            for (int i = 0; i < 5; i++)
            {
                cout << people[i].bopname << endl;
            }
            break;
        case 'd':
            for (int i = 0; i < 5; i++)
            {
                if (people[i].preference == 0)
                {
                    cout << people[i].fullname << endl;
                }
                else if (people[i].preference == 1)
                {
                    cout << people[i].title << endl;
                }
                else
                {
                    cout << people[i].bopname << endl;
                }
            }
            break;
        default:
            cout << "请输入有效选项!" << endl;
        }
        cout << "下一个选项:" << endl;
        cin >> ch;
    }
    cout << "Bye!";
}