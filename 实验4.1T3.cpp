//สตั้4.1_3
#include <iostream>
bool cha(bool x) {
    return !x;
}
void change(bool* a, int n) {
    for (int i = 0; i < 100; i++) {
        if ((i + 1) % n == 0) { a[i] = cha(a[i]); }
    }
}
int main() {
    bool a[100];
    for (int i = 0; i < 100; i++) { a[i] = 1; }
    for (int i = 2; i < 101; i++) {
        change(a, i);
    }
    for (int i = 0; i < 100; i++) {
        if (a[i] == 1) { std::cout << i + 1 << " "; }
    }
    return 0;
}
