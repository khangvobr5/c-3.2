#include <iostream>
using namespace std;

int main() {
    // Khai b�o bien du luu nhiet do Celsius v� Fahrenheit
    double celsius, fahrenheit;

    // Y�u cau nguoi d�ng nhap nhiet do theo do Celsius
    cout << "Nhap nhiet do theo do Celsius: ";
    cin >> celsius;

    // Chuyen dui ta do Celsius sang do Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Hien thi ket qua
    cout << "Nhiet do " << celsius << " do Celsius tuong duong vai " 
         << fahrenheit << " do Fahrenheit." << endl;

    return 0;
}
