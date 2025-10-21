#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "請輸入三個整數: ";
	cin >> a >> b >> c;
	int max = a, min = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (b < min) min = b;
	if (c < min) min = c;

	cout << "最大值: " << max << endl;
	cout << "最小值: " << min << endl;
	return 0;
}