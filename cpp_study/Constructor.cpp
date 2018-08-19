#include <iostream>
using namespace std;

class Integer{
    public:
        int value;

        Integer();
        Integer(int n);
        void Show();
};

// コンストラクタ
Integer::Integer(){
    value = 0;
}

Integer::Integer(int n){
    value = n;
}

// メンバ変数の表示
void Integer::Show(){
    cout << value << endl;
}

int main(){
    Integer a;
    Integer b(100), c(12);

    a.Show();
    b.Show();
    c.Show();
}