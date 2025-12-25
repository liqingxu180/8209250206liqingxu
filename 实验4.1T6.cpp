//สตั้4.1_6
#include <iostream>
#include <string>
int count(const char a[],int n) {
    int s = strlen(a);
    int num = 0;
    for (int i = 0; i < s; i++) {
        if (a[i] - n == 65 || a[i] - n == 97) {
            num++;
        }
    }
    return num;
}
int main() {
    std::cout << "enter a string:" << std::endl;
    char a[100];
    std::cin.getline(a, 100);
    int b[26] = { 0 };
    for (int i = 0; i < 26; i++) {
        b[i] = count(a, i);
        if (b[i] != 0) {
            std::cout << char(97 + i) << ":" << b[i] << "\n";
        }
    }
    return 0;
}
