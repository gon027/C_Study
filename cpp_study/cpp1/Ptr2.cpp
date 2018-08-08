#include <iostream>
using namespace std;

// ポインタpを変数の代わりとして扱う

int main(void) {
    int a;
    int* p = &a;
    // int *p = &a;        //別の宣言方法

    a = 0;
    cout << " a = " << a << endl;
    cout << "*p = " << *p << endl;

    *p = 5;
    cout << " a = " << a << endl;
    cout << "*p = " << *p << endl;
}