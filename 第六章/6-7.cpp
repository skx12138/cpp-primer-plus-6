#include <iostream>
#include <cctype>
using namespace std;

bool isVowel(char c) {
    char lowercaseC = tolower(c);
    return (lowercaseC == 'a' || lowercaseC == 'e' || lowercaseC == 'i' || lowercaseC == 'o' || lowercaseC == 'u');
}

int main() {
    string word;
    int vowelCount = 0;
    int consonantCount = 0;
    int otherWordsCount = 0;

    cout << "请输入单词(按q退出)" << endl;

    while (cin >> word && word != "q") {
        if (!isalpha(word[0])) {
            otherWordsCount++;
        }
        else 
        {
            switch(tolower(word[0])) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vowelCount++;
                    break;
                default:
                    consonantCount++;
                    break;
            }
        }
    }

    cout << "以元音打头的单词数量：" << vowelCount << endl
         << "以辅音打头的单词数量：" << consonantCount << endl
         << "其他单词的数量：" << otherWordsCount << endl;

    return 0;
}
