#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "�п�J�T�Ӿ��: ";
	cin >> a >> b >> c;
	int max = a, min = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (b < min) min = b;
	if (c < min) min = c;

	cout << "�̤j��: " << max << endl;
	cout << "�̤p��: " << min << endl;
	return 0;
}