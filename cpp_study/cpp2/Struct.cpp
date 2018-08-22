#include <iostream>
using namespace std;

const int MAX_NAME = 16;

// 構造体の宣言
struct Student{
    char name[MAX_NAME + 1];
    int scoreJapanese;
    int scoreMath;
    int scoreEnglish;
};

// ポインタ -> メンバ名
void Show(const Student* pointer){
    cout << "名前 ：" << pointer -> name << endl
         << " 国語 :" << pointer -> scoreJapanese << endl
         << " 数学 :" << pointer -> scoreMath << endl
         << " 英語 :" << pointer -> scoreEnglish << endl;
}

int main(void){
    // 構造体の宣言
    Student student[] = {
        {"蒼井", 37, 29, 69},
        {"井上", 47, 26, 68},
        {"宇野", 46, 19, 99}
    };

    int size = sizeof student / sizeof *student;

    for(int i = 0; i < size; ++i){
        Show(&student[i]);
    }
}