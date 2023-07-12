#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    long t;
    std::cin >> t;
    while (t--) {
        long n, k;
        std::cin >> n >> k;
        std::vector<std::pair<long, long>> a(n);
        for (long p = 0; p < n; p++) {
            long x;
            std::cin >> x;
            a[p] = std::make_pair(x, p);
        }
        std::sort(a.begin(), a.end());
        std::vector<long> b(n);
        for (long p = 0; p < n; p++) {
            std::cin >> b[p];
        }
        std::sort(b.begin(), b.end());
        std::vector<long> c(n);
        for (long p = 0; p < n; p++) {
            c[a[p].second] = b[p];
        }
        for (long p = 0; p < n; p++) {
            std::cout << c[p] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
