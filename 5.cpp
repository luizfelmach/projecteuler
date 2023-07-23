#include <iostream>
#include <algorithm>
#include <cmath>

bool is_prime(long k) {
    long i;
    if (k == 1) return false;
    for (i = 2; i <= sqrt(k); i++) {
        if (k % i == 0) return false;
    }

    return true;
}

long nextPrime(long k) {
    long t = k + 1;
    while (1) {
        if (is_prime(t)) return t;
        t += 1;
    }
    return 0;
}

long mmc(std::vector<int> n) {
    int res = 1;
    int d = 2;
    int max = *std::max_element(n.begin(), n.end());

    while (1) {
        int cont = 0;
        for (auto &k : n) {
            if (k % d == 0) {
                k /= d;
                cont += 1;
            }
        }
        if (cont != 0) {
            res *= d;
        } else {
            d = nextPrime(d);
            if (d > max) break;
        }
    }

    return res;
}

int main() {
    std::vector<int> n;
    for (int i = 1; i <= 20; i++)
        n.push_back(i);
    std::cout << mmc(n) << "\n";
    return 0;
}
