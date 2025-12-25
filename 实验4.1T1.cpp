//สตั้4.1_1
#include <iostream>
#include <vector>
bool check(std::vector<int>&a, int b) {
    for (int i = 0; i < a.size();i++) {
        if (a[i] == b)return 0;
    }
    return 1;
}
int main() {
    std::vector<int>a;
    int b[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> b[i];
    }
    a.push_back(b[0]);
    for (int i = 1; i < 10; i++) {      
        if (check(a, b[i])) { a.push_back(b[i]); }
    }
    for (int i = 0; i < a.size(); i++) {
        std::cout << a[i] << " ";
    }
    return 0;
}