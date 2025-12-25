//สตั้3.5
#include <iostream>
int extra(int a) {
    if(a > 0)
    a = (1 + extra(a - 1)) * 2;
    return a;
}
int main() {
    int m = 9;
    std::cout << extra(m);
    return 0;
}
