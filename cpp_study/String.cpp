#include <iostream>
#include <cstdio>       //sprintfを使うために必要
using namespace std;

int f(int x, int y){
    return 2 * x + y;
}

void Show(int x, int y){
    char str[50];

    sprintf(str, "f(%d, %d) = %d", x, y, f(x, y));
    // printf("f(%d, %d) = %d", x, y, f(x, y));
    cout << str << endl;
}

int main(void){
    Show(1, 2);
    Show(31, 413);
}