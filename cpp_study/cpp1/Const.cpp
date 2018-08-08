#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;       //定数ARRAY_SIZEを宣言

void Init(int array[]){
    for(int i = 0; i < ARRAY_SIZE; ++i){
        array[i] = i * 5;
    }
}

void Show(const int array[]){
    for(int i = 0; i < ARRAY_SIZE; ++i){
        cout << array[i] << ' ';
    }
    cout << endl;       // 改行
}

int main(){
    int n[ARRAY_SIZE];

    Init(n);
    Show(n);
}