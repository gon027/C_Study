#include <iostream>
using namespace std;

/*関数プロトタイプ
関数プロトタイプを宣言すると関数をmainの下に書くことができる
*/
void birthMonth(void);

int main(){
    birthMonth();
}

void birthMonth(void){
    int month;
    cout << "何月生まれですか" << flush;
    cin >> month;
    if(1 <= month && month <= 12){
        cout << month << "月" << endl;
    }else{
        cout << "1以上12以下の自然数を入力" << endl;
    }
}

