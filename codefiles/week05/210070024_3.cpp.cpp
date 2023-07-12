#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    long n = 0, m = 0;
    std::cin >> n >> m;
    std::vector<long> degree(n + 1, 0);

    long first = 0, second = 0;
    for (long row = 0; row < m; row++) {
        std::cin >> first >> second;
        ++degree[first];
        ++degree[second];
    }

    std::sort(degree.begin(), degree.end());

    std::string output = "unknown";
    if (degree[1] == 2 && degree[n] == 2) {
        output = "ring";
    } else if (degree[1] == 1 && degree[n - 1] == 1 && degree[n] == n - 1) {
        output = "star";
    } else if (degree[1] == 1 && degree[2] == 1 && degree[n] == 2) {
        output = "bus";
    }

    std::cout << output << " topology" << std::endl;

    return 0;
}
