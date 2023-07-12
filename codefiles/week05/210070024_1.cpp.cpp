#include <iostream>
#include <set>

int main() {
    int n;
    std::cin >> n;
    std::set<int> in, out;
    long totalCost = 0, cost = 0;

    while (n--) {
        int a, b, c;
        std::cin >> a >> b >> c;
        totalCost += c;
        if (in.count(a) || out.count(b)) {
            cost += c;
            out.insert(a);
            in.insert(b);
        } else {
            in.insert(a);
            out.insert(b);
        }
    }

    if (totalCost - cost < cost) {
        cost = totalCost - cost;
    }
    std::cout << cost << std::endl;

    return 0;
}
