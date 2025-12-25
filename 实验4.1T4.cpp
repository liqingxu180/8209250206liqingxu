//实验4.1_4
#include <iostream>
#include <vector>
void sort(std::vector<int>&a,int l) {
    for (int i = 0; i < l; i++) {
        for (int j = i + 1; j < l; j++) {
            if (a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}
std::vector<int> add(std::vector<int>&x,std::vector<int>&y) {
    std::vector<int>a(x.size()+y.size());
    for (int i = 0; i < x.size(); i++) {
        a[i] = x[i];
    }
    for (int j = 0; j < y.size(); j++) {
        a[x.size() + j] = y[j];
    }
    int p = a.size();
    sort(a, p);
    return a;
}
int main() {
    std::cout << "请输入两个已排序的数组" << std::endl;
    int m, n;
    std::cin >> m;
    std::vector<int>x(m);
    for (int i = 0; i < m; i++) {
        std::cin >> x[i];
    }
    std::cin >> n;
    std::vector<int>y(n);
    for (int i = 0; i < n; i++) {
        std::cin >> y[i];
    }
    std::vector<int>a=add(x, y);
    for (int i = 0; i < m + n; i++)
        std::cout << a[i] <<" ";
}
