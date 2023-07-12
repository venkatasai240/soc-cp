#include <iostream>

int main() {
    long n, m, count = 0;
    std::cin >> n >> m;
    while (n < m) {
        if (m % 2)
            ++m;
        else
            m /= 2;
        ++count;
    }
    std::cout << count + n - m << std::endl;

    return 0;
}
