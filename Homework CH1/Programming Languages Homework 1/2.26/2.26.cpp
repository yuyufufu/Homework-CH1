#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "�п�J��Ӿ��: ";
    cin >> a >> b;

    if (a % b == 0)
        cout << a << " �O " << b << " ������" << endl;
    else
        cout << a << " ���O " << b << " ������" << endl;
    return 0;


}