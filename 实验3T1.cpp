//实验3.1
#include <iostream>
int min(int a, int b) {
    if (a > b) { return b; }
    else { return a; }
}
int max(int a, int b) {
    if (a < b) { return b; }
    else { return a; }
}
int gcd(int a, int b) {
    int m = min(a, b);
    for (; m > 0; m--) {
        if (a % m == 0 && b % m == 0) { return m; }
        if (m == 1) { return m; }
    }
}
int lcm(int a, int b) {
    int m = max(a, b);
    for (;; m++) {
        if (m % a == 0 && m % b == 0) { return m; }
    }
}
int main() {
    int m, n;
    std::cin >> m >> n;
    std::cout << "最大公约数是" << gcd(m, n) << "\n";
    std::cout << "最小公倍数是" << lcm(m, n) << "\n";
    return 0;
}
