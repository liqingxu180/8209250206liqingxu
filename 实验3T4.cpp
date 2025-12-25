//实验3.4
#include <iostream>
#include <cmath>
#include "shiyan3_4.h"
bool is_vavid(double side1, double side2, double side3) {
    if (side1 < side2 + side3 && side2 < side1 + side3 && side3 < side1 + side2) { return 1; }
    return 0;
}
double area(double side1, double side2, double side3) {
    int s = (side1 + side2 + side3) / 2;
    int S = sqrt(s * (s - side1) * (s - side2) * (s - side3));
    return S;
}
int main() {
    int a, b, c;
    std::cout << "请输入三角形三边长" << "\n";
    std::cin >> a >> b >> c;
    if (is_vavid(a, b, c)) { std::cout << "三角形的面积是" << area(a, b, c) << "\n"; }
    else { std::cout << "该三角形不合法" << "\n"; }
    return 0;
}
