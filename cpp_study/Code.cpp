#include <iostream>
using namespace std;

int main(void){
    char hello[] = "Hello!";

    hello[4] = '\0';
    

    cout << "「" << hello << "」を文字コードに帰ると" << endl;
    /*
    sizeof で配列の個数を取得できる

    ¥0が出てくるまでループをつずける
    */

    for(int i = 0; hello[i] != '\0'; ++i){
        cout << (int)(unsigned char) hello[i] << ",";
    } 

    cout << endl << "になります" << endl;

    return 0;
}