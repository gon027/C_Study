#include <iostream>
#include <cmath>        //数学関数を使うためのヘッダーファイル
using namespace std;

int main(void){
    double a, b;
    double radian;

    // ピタゴラスの定理
    /* 
    cout << "直角を挟む２辺の長さの入力 ->" << flush;
    cin >> a >> b;
    cout << "斜辺の長さ" << sqrt(a * a + b * b) << endl;
    */

    // 三角関数を求める
    cout << "角度を入力" << flush;
    cin >> a;
    radian = a * M_PI / 180;
    cout << sin(radian) << endl;
    cout << cos(radian) << endl;
    cout << tan(radian) << endl;
}