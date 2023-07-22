#include <iostream>
#include <algorithm>

std::vector<long> numbers;

bool checkPalindrome(long x) {
    long a = x;
    long b = 0;
    while(a) {
        b *= 10; 
        b += a % 10;
        a /= 10;
    }
    return b == x;
}

void solve() {
    long m;
    int i, j;
    for (i = 100; i <= 999; i++) {
        for(j = 100; j <= 999; j++) {
            m = (long)(i * j);
            if (checkPalindrome(m)) {
                numbers.push_back(m);
                std::push_heap(numbers.begin(), numbers.end());
            }
        }
    }
}

int main() {
    solve();
    std::cout << numbers.front() << "\n";
    return 0;
}
