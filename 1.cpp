#include <iostream>

int main() {
    int sum = 0;
    int target;
    std::cin >> target;

    for (int i = 0; i < target; i++) {
        if (i % 3 == 0) {
            sum += i;
        } else if (i % 5 == 0) {
            sum += i;
        }
    }

    std::cout << sum << "\n";
    return 0;
}
