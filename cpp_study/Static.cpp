#include <iostream>
#include <algorithm>        // fill_nを使うためのヘッダファイル
using namespace std;

void CheckAddress_sub();
void CheckAddress_sub2();

void CheckAddress(){
    cout << "アドレスが常に一定かのチェック" << endl;

    CheckAddress_sub();
    CheckAddress_sub2();
    CheckAddress_sub();
}

// 情的変数aと動的変数bのアドレスを出力
void CheckAddress_sub(){
    static int a;
    int b;
    cout << "&a = " << (size_t)&a << endl;
    cout << "&b = " << (size_t)&b << endl;
}

// この関数の中からChecAddres_subを読んだ時に変数aと変数bのアドレスがどうなるかチェック
void CheckAddress_sub2(){
    cout << "in Sub2" << endl;
    CheckAddress_sub();
}

// 初期化が1回鹿されないかのチェック
void CheckIntiOnce_sub();

void CheckInitOnce(){
    cout << endl << "初期化が1回しかされないかのチェック" << endl;

    CheckIntiOnce_sub();
    CheckIntiOnce_sub();
}

// ++aと++bの影響が2度目以降の呼び出しに影響するかチェック
void CheckIntiOnce_sub(){
    static int a = 3;
    int b = 3;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    ++a;
    ++b;
}

// 0で初期化されるのかチェック
// 自動変数も一緒に確かめる
void CheckZeroInit_Sub();
void CheckZeroInit_Sub2();

void CheckZeroInit(){
    cout << endl << "0で初期化されるかチェック" << endl;

    CheckZeroInit_Sub();
    CheckZeroInit_Sub2();
}

// 静的変数が寝にでしょ生かされているかをチェック
void CheckZeroInit_Sub(){
    static int a, b, c, d;
    cout << a << ',' << b << ',' << c << ',' << d << endl;
}

// 動的変数が何で初期化されているかをチェック
void CheckZeroInit_Sub2(){
    int a, b, c, d;
    cout << a << ',' << b << ',' << c << ',' << d << endl;
}

// 値が保証されているかチェック
void CheckInvariant_Sub(int*& pa, int*& pd);
void CheckInvariant_Sub2();

void CheckInvariant(){
    cout << endl << "値が保証されるかチェック" << endl;

    int *pa, *pd;       //*は両方につける
    CheckInvariant_Sub(pa, pd);
    CheckInvariant_Sub2();
    // CheckInvariant_Sub2 を読んでもa と bの値が保存されているかチェック
    // 場合によって失敗する確率がある
    cout << "*pa = " << *pa << endl;
    cout << "*pd = " << *pd << endl;
}

// 静的変数 a と動的変数 b のアドレスを引数を通して返す
void CheckInvariant_Sub(int*& pa, int*& pd){
    static int a = 9;
    int b = 9;
    pa = &a;
    pd = &b;
}

// 大きな変数を作って、全て０で埋める
// fill_nは指定したデータで配列などを埋める関数の様なもの
void CheckInvariant_Sub2(){
    int dummy[100];
    fill_n(dummy, 100, 0);
}

int main(){
    CheckAddress();
    CheckInitOnce();
    CheckZeroInit();
    CheckInvariant();
}