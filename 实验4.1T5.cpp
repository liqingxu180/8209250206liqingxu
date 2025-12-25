//สตั้4.1_5
#include <iostream>
#include <string>
int indexof(const char s1[], const char s2[]) {
    for (int i = 0; i < strlen(s2); i++) {
        if (s1[0] == s2[i]) {
            int p = 0;
            for (int k = 0; k < strlen(s1); k++) {
                if (s1[k] != s2[i + k]) {
                    p = 1;
                }
            }
            if (p == 0) {
                return i;
            }
        }
    }
    return -1;
}
int main() {
    char s1[100],s2[100];
    std::cin.getline(s1, 100);
    std::cin.getline(s2, 100);
    int r = indexof(s1, s2);
    std::cout << "indexof\"" << s1 << "\",\"" << s2 << "\")" << "is " << r;

}
