#include <iostream>
using namespace std;

// constを入れることによって実行可能
// String型からchar型に変えたことによってエラーがでる

size_t StrLen(const char* str){
    size_t i;
    for(i = 0; str[i] != '\0'; ++i){
        // 何もしない
    }
    return i;
}

void ShowLength(const char* str) {
    cout << "文字列『" << str << "』の長さは"
         << StrLen(str) << "バイトです。" << endl;
}

int main(){
    ShowLength("Hello");
    ShowLength("");
    ShowLength("a");

    return 0;
}