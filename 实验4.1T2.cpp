//สตั้4.1_2
#include<iostream>
void sort(int* a) {
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}
int main() {
    int a[10];
    for (int i = 0; i < 10; ++i) {
        std::cin >> a[i];
    }
    sort(a);
    for (int i = 0; i < 10; ++i) {
        std::cout << a[i] << " ";
    }
    return 0;
}
