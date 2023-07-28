/*
编写一个程序，要求用户输入最多10个高尔夫成绩，并将其存储在一个数组中。
程序允许用户提早结束输入，并在一行上显示所有成绩，然后报告平均成绩。
请使用3个数组处理函数来分别进行输入、显示和计算平均成绩。
*/

#include <iostream>
using namespace std;

void inputScores(int scores[], int &numScores);
double computeAverage(const int scores[], int numScores);
void show(const int scores[], int numScores);

int main()
{
    int scores[10] = {0};
    int numScores = 0;

    inputScores(scores, numScores);
    double average = computeAverage(scores, numScores);
    show(scores, numScores);

    cout << "平均成绩为：" << average << endl;

    return 0;
}

void inputScores(int scores[], int &numScores)
{
    cout << "请输入最多10个高尔夫的成绩,输入-1结束:" << endl;

    for (int i = 0; i < 10; i++)
    {
        int score;
        cin >> score;

        if (score == -1)
        {
            break;
        }

        scores[i] = score;
        numScores++;
    }
}
//计算平均成绩
double computeAverage(const int scores[], int numScores)
{
    int sum = 0;
    for (int i = 0; i < numScores; i++)
    {
        sum += scores[i];
    }

    return static_cast<double>(sum) / numScores;
}

void show(const int scores[], int numScores)
{
    cout << "高尔夫的所有成绩是：" << endl;
    for (int i = 0; i < numScores; i++)
    {
        cout << scores[i] << " ";
    }
    cout << endl;
}
