#include <iostream>
using namespace std;

int main() {
    // Khai báo bien du luu nhiet do Celsius và Fahrenheit
    double celsius, fahrenheit;

    // Yêu cau nguoi dùng nhap nhiet do theo do Celsius
    cout << "Nhap nhiet do theo do Celsius: ";
    cin >> celsius;

    // Chuyen dui ta do Celsius sang do Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Hien thi ket qua
    cout << "Nhiet do " << celsius << " do Celsius tuong duong vai " 
         << fahrenheit << " do Fahrenheit." << endl;

    return 0;
}
