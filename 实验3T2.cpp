//สตั้3.2
#include <iostream>
bool is_prime(int num) {
    if (num <= 1) { return false; }
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) { return false; }
    }
    return true;
}
int main() {
    int i = 2;
    int p = 0;
    for (int s = 0; s < 200; i++) {
        if (is_prime(i) == 1) {
            std::cout << i << " ";
            s++;
            p = 1;
        }
        if (s % 10 == 0 && s != 0 && p == 1) {
            std::cout << "\n";
            p = 0;
        }
    }
}
