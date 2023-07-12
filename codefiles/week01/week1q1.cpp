# include<iostream>
#include<cmath>
using namespace std;

int main() {
    int numTestCases;
    std::cin >> numTestCases;

    for (int i = 0; i < numTestCases; i++) {
       long long int input;
        std::cin >> input;
        long long int output = 1+ pow(input+1, 2);
        std::cout << output << std::endl;
    }

    return 0;
}
