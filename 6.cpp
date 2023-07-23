#include <iostream>
#include <cmath>
#define ull unsigned long long

ull s_pa(ull k) {
    return k * (k + 1) / 2;
}


ull s_square(ull k) {
    return k * (k + 1) * (2 * k + 1) / 6;
}


int main() {
    ull n;
    std::cin >> n;
    std::cout << std::fixed << pow(s_pa(n), 2) - s_square(n) << "\n";
    return 0;
}
