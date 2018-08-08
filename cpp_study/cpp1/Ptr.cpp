#include <iostream>
using namespace std;

int main(void) {
    char a;
    char* p;        //ポインタは型*変数名で宣言

    // ポインタpにaのアドレスを代入
    p = &a;
    cout << " p = " << (size_t) p << endl;
    cout << "&a = " << (size_t) &a << endl;
}