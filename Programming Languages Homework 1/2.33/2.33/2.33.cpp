#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double total_km, price_per_l, km_per_l, parking_fee, toll_fee;
	cout << "請輸入一天的總行駛里程數(公里): ";
	cin >> total_km;
	cout << "請輸入每公升汽油價格(元): ";
	cin >> price_per_l;
	cout << "請輸入每公升可行駛公里數: ";
	cin >> km_per_l;
	cout << "請輸入一天的停車費(元): ";
	cin >> parking_fee;
	cout << "請輸入一天的通行費(元): ";
	cin >> toll_fee;

	double fuel_cost = (total_km / km_per_l) * price_per_l;
	double total_cost = fuel_cost + parking_fee + toll_fee;

	cout << fixed << setprecision(2);
	cout << "今日開車總花費為: $" << total_cost << " 元" << endl;
	return 0;
}