#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double weight, height;
    cout << "�п�J�魫(����): ";
    cin >> weight;
    cout << "�п�J����(����): ";
    cin >> height;

    double bmi = weight / (height * height);
    cout << fixed << setprecision(2);
    cout << "BMI = " << bmi << endl;

    if (bmi < 18.5)
        cout << "�魫�L��" << endl;
    else if (bmi < 24)
        cout << "���`" << endl;
    else if (bmi < 27)
        cout << "�L��" << endl;
    else
        cout << "�έD" << endl;

    return 0;

}