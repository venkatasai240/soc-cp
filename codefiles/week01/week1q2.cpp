# include<iostream>
#include<cmath>
using namespace std;

int main() {
    int z;
    std::cin >> z;


    for (int n = 1; n < z+1; n++) {
   
        long long int output = (0.5*(pow(n, 4)-pow(n, 2)) - 4*(pow(n, 2)-3*n +2));
        std::cout << output << std::endl;
    }

    return 0;
}
