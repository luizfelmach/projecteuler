#include <iostream>
#include <cmath>

bool is_prime(long k) {
    long i;
    if (k == 1) return false;
    for (i = 2; i <= sqrt(k); i++) {
        if (k % i == 0) return false;
    }

    return true;
}

long find_prime(long k) {
    long target = 600851475143;
    long t = k;
    for (t; t >= 2; t--) {
        if (is_prime(t) and target % t == 0) return t;
    }
    return -1;
}

int main() {
    long target = 600851475143;
    std::cout << find_prime((long)sqrt(target)) << "\n";
    return 0;
}
