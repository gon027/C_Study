#include <iostream>
using namespace std;

// 配列の宣言
const char* const MONTH_NAME[] = {
    "睦月", "如月", "弥生", "卯月", "皐月", "水無月",
    "文月", "葉月", "長月", "神無月", "霜月", "師走"
};

// 数値を判定してMONTH_NAMEの文字列を返す
const char* GetOldMonthName(int month){
    if(1 <= month && month <= 12){
        return MONTH_NAME[month - 1];
    }
    // return 0;
    return NULL;        //０を返す
}

int main(void){
    int month;

    cout << "今は何月ですか？" << flush;
    cin >> month;

    const char* name = GetOldMonthName(month);
    if(name == 0){
        cout << "そんな月は存在しない" << endl;
    } else {
        cout << name << endl;
    }
}