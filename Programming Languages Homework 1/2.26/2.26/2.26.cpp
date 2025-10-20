#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "請輸入兩個整數: ";
    cin >> a >> b;

    if (a % b == 0)
        cout << a << " 是 " << b << " 的倍數" << endl;
    else
        cout << a << " 不是 " << b << " 的倍數" << endl;
    return 0;


}