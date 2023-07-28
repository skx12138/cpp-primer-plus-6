#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
#include <limits>

using namespace std;

struct Donor {
    string name;
    string amount;
};

int main() {
    // 打开文件
    ifstream inputFile("donors.txt");

    if (inputFile.is_open()) {
        int numDonors;
        inputFile >> numDonors;

        // 创建 vector 存储捐款人信息
        vector<Donor> donorList(numDonors);

        for (int i = 0; i < numDonors; i++) {
            inputFile.ignore(numeric_limits<streamsize>::max(), '\n');
            
            // 读取捐款人姓名和金额
            getline(inputFile, donorList[i].name, ':');
            inputFile >> donorList[i].amount;
        }

        cout << "Grand Patrons：" << endl;
        bool grandPatronFound = false;
        for (int i = 0; i < numDonors; i++) {
            // 将字符串金额转换为浮点数
            long double amount = stold(donorList[i].amount);
            
            if (amount > 10000.0L) {
                cout << donorList[i].name << "：$" << fixed << setprecision(2) << amount << endl;
                grandPatronFound = true;
            }
        }
        if (!grandPatronFound) {
            cout << "none" << endl;
        }

        cout << endl;

        cout << "Patrons：" << endl;
        bool patronFound = false;
        for (int i = 0; i < numDonors; i++) {
            // 将字符串金额转换为浮点数
            long double amount = stold(donorList[i].amount);
            
            if (amount <= 10000.0L) {
                cout << donorList[i].name << "：$" << fixed << setprecision(2) << amount << endl;
                patronFound = true;
            }
        }
        if (!patronFound) {
            cout << "none" << endl;
        }

        // 关闭文件
        inputFile.close();
    } else {
        cout << "无法打开文件。" << endl;
    }

    return 0;
}
