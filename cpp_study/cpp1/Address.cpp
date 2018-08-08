#include <iostream>
using namespace std;

void Foo() {
    int a;
    char b[10];

    // 変数、配列、関数のアドレスを表示
    cout << "a   : " << (size_t)&a << endl;
    cout << "b   : " << (size_t)b << endl;
    cout << "Foo : " << (size_t)Foo << endl;
}

int main(void) {
    Foo();
}