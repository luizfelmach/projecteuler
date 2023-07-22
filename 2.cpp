#include <iostream>
#include <cstring>

int mem[10000];

int fibo(int k) {
    if (k <= 0) return 0;
    if (mem[k] == -1) {
       mem[k] = fibo(k-1) + fibo(k-2);
    }
    return mem[k];
}

int main() {
    memset(mem, -1, sizeof(mem));
    mem[0] = 0;
    mem[1] = 1;
    int limit = 4000000;
    int fibo_i = 2;
    int f = fibo(fibo_i);
    int sum = 0;

    while (f <= limit) {
        if (f % 2 == 0) {
            sum += f;
        }
        f = fibo(++fibo_i);
    }

    std::cout << sum << "\n";
    return 0;
}
