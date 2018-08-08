#include <iostream>
#include <cstdlib>      //乱数を使うためのヘッダーファイル
#include <ctime>        //時間を扱うためのヘッダーファイル
using namespace std;

//1秒ごとに結果が異なるようにする
void InitRand(){
    srand((unsigned int)time(NULL));
}

//乱数の生成
int Dice(){   
    return rand() % 6 + 1;
    // return (int)(rand() / (RAND_MAX + 1.0) * 6 + 1);
}

int main(void){
    InitRand();
    for(int i = 0; i < 20; ++i){
        cout << Dice() + Dice() << ' ';
        // cout << rand() << endl;
        // cout << RAND_MAX << endl;        //RAND_MAXを表示
    }
    cout << endl;
}