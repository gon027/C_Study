#include <iostream>
using namespace std;

// 数字かどうか判定
bool IsDigit(char ch) {
    return ('0' <= ch && ch <= '9');
}

int main(void) {
    while (true) {
        char ch;
        cout  << "何か文字を入力:" << flush;
        cin >> ch;

        // Qかqが入力されたらループを抜ける
        if(ch == 'Q' || ch == 'q'){
            break;
        }

        if(IsDigit(ch)){
            cout << "数字です。" << endl;
        } else {
            cout << "数字ではない。" << endl;
        } 
    }

    cout << "終了します。" << endl;
}
