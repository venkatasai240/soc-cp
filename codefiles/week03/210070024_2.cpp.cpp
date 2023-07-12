#include <iostream>

int main() {
    long t;
    std::cin >> t;
    while (t--) {
        long n;
        std::cin >> n;
        bool res = false;
        for (long p = 1; p <= n; p++) {
            long x;
            std::cin >> x;
            if (x <= p) {
                res = true;
            }
        }

        std::cout << (res ? "YES" : "NO") << std::endl;
    }

    return 0;
}
