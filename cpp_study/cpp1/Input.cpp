#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "値を代入" << flush;
    cin >> a;
    cout << "bで割った数" << a / 2 << endl;
    cout << "bで割った数" << a % 2 << endl;

    if(a % 2 == 0){
        cout << "偶数" << endl;
    } else {
        cout << "奇数" << endl;
    }
}