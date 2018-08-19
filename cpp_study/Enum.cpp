#include <iostream>
using namespace std;

enum ComparResult{
    CR_LESS_THAN,
    CR_EQUAL_TO,
    CR_GREATER_THAN
};

ComparResult Conpare(int a, int b){
    return
        a < b ? CR_LESS_THAN :
        a > b ? CR_GREATER_THAN :
                CR_EQUAL_TO;
}

bool Conpare(){
    const char* massage[] = {
        "小さい",
        "等しい",
        "大きい"
    };

    int a, b;

    cout << "入力" << flush;
    cin >> a >> b;

    if(a == -1){
        return false;
    }

    cout << massage[Conpare(a, b)] << endl;

    return true;
}

int main(){
    while(Conpare()){
        // 何もしない
    }
}