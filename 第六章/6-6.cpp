#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

struct Donor {
    string name;
    long double amount;
};

int main() {
    int numDonors;

    cout << "请输入捐赠者数目：";
    cin >> numDonors;

    // 动态分配结构体数组
    Donor* donorList = new Donor[numDonors];

    for (int i = 0; i < numDonors; i++) {
        cout << "请输入捐赠者 #" << (i + 1) << " 的姓名：";
        cin.ignore();
        getline(cin, donorList[i].name);
        cout << "请输入捐赠者 #" << (i + 1) << " 的款项：$";
        cin >> donorList[i].amount;
    }

    // 打开文件
    ofstream outputFile("donors.txt");

    if (outputFile.is_open()) {
        outputFile << "Grand Patrons:" << endl;
        bool grandPatronFound = false;
        for (int i = 0; i < numDonors; i++) {
            if (donorList[i].amount > 10000.0L) {
                outputFile << donorList[i].name << ":$" << fixed << setprecision(2) << donorList[i].amount << endl;
                grandPatronFound = true;
            }
        }
        if (!grandPatronFound) {
            outputFile << "none" << endl;
        }

        outputFile << endl;

        outputFile << "Patrons:" << endl;
        bool patronFound = false;
        for (int i = 0; i < numDonors; i++) {
            if (donorList[i].amount <= 10000.0L) {
                outputFile << donorList[i].name << ":$" << fixed << setprecision(2) << donorList[i].amount << endl;
                patronFound = true;
            }
        }
        if (!patronFound) {
            outputFile << "none" << endl;
        }

        // 关闭文件
        outputFile.close();
        cout << "输出已写入文件 donors.txt" << endl;
    } else {
        cout << "无法打开文件。" << endl;
    }

    // 释放动态分配的内存
    delete[] donorList;

    return 0;
}
