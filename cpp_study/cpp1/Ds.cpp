#include <iostream>
using namespace std;

int main(void){
    for(int i = 0; i <= 5; i++){
        int a, b, op;
        cout << "aの値を入力" << flush;
        cin >> a;

        cout << "bの値を入力" << flush;
        cin >> b;

        cout << "opの値を入力" << flush;
        cin >> op;

        switch(op){
            case 1:
            cout << a + b << endl;
            break;
            case 2:
            cout << a - b << endl;
            break;
            case 3:
            cout << a * b << endl;
            break;
            case 4:
            cout << a / b << endl;
            break;
            default:
            cout << "1 ~ 4までの値を入力" << endl;
            continue;
        }
    }
}
