#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double weight, height;
    cout << "請輸入體重(公斤): ";
    cin >> weight;
    cout << "請輸入身高(公尺): ";
    cin >> height;

    double bmi = weight / (height * height);
    cout << fixed << setprecision(2);
    cout << "BMI = " << bmi << endl;

    if (bmi < 18.5)
        cout << "體重過輕" << endl;
    else if (bmi < 24)
        cout << "正常" << endl;
    else if (bmi < 27)
        cout << "過重" << endl;
    else
        cout << "肥胖" << endl;

    return 0;

}