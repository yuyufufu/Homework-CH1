#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double total_km, price_per_l, km_per_l, parking_fee, toll_fee;
	cout << "�п�J�@�Ѫ��`��p���{��(����): ";
	cin >> total_km;
	cout << "�п�J�C���ɨT�o����(��): ";
	cin >> price_per_l;
	cout << "�п�J�C���ɥi��p������: ";
	cin >> km_per_l;
	cout << "�п�J�@�Ѫ������O(��): ";
	cin >> parking_fee;
	cout << "�п�J�@�Ѫ��q��O(��): ";
	cin >> toll_fee;

	double fuel_cost = (total_km / km_per_l) * price_per_l;
	double total_cost = fuel_cost + parking_fee + toll_fee;

	cout << fixed << setprecision(2);
	cout << "����}���`��O��: $" << total_cost << " ��" << endl;
	return 0;
}