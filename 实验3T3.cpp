//实验3.3
#include <iostream>
#include "shiyan3_3.h"
double celsius_to_fah(double cel) {
    double fah = cel * 18 + 32;
    return fah;
}
double fahrenheit_to_cels(double fah) {
    double cel = (fah - 32) / 1.8;
    return cel;
}
int main() {
    std::cout << "请选择要进行的操作（1为℉转℃，2为℃转℉）" << std::endl;
    int m;
    std::cin >> m;
    std::cout << "请输入对应的温度" << std::endl;
    int n;
    std::cin >> n;
    if (m == 1) { std::cout << fahrenheit_to_cels(n) << "\n"; }
    else if (m == 2) { std::cout << celsius_to_fah(n) << "\n"; }
    return 0;
}
