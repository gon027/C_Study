#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    const int KUKU_SiZE = 9;
    int kuku[KUKU_SiZE][KUKU_SiZE];

    for(int i = 1; i <= KUKU_SiZE; ++i){
        for(int j = 1; j <= KUKU_SiZE; ++j){
            kuku[i - 1][j -1] = i * j;
        }
    }

    cout << "   1  2  3  4  5  6  7  8  9" << endl;
    for(int i = 1; i <= KUKU_SiZE; ++i){
        printf(" %d" , i);
        for(int j = 1; j <= KUKU_SiZE; ++j){
            printf("%2d ", kuku[i - 1][j - 1]);
        }
        cout << endl;
    }
}