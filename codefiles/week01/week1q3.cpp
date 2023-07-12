#include <iostream>
#include <vector>

using namespace std;

vector<long long int> generateArray(long long int n, long long int k, long long int b, long long int s) {
    vector<long long int> result;

    if (k * b > s || k * (n + b) <= s) {
        result.push_back(-1);
        return result;
    } 
    if (k=1){vector<long long int> solution(n,0);
         solution[0]=s;
         return solution;
}else {
        long long int Q = (s - k * b) / (k - 1);
        long long int R = (s - k * b) % (k - 1);
        if (R == 0 && Q > n) {
            result.push_back(-1);
            return result;
        }
        if (R != 0 && Q > (n - 1)) {
            result.push_back(-1);
            return result;
        } else {
            vector<long long int> answer(n, 0);
            for (long long int i = 1; i < Q + 1; i++) {
                answer[i] = k - 1;
            }
            answer[0] = R + k * b;
            return answer;
        }
    }
}

int main() {
    long long int t;
    cin >> t;

    while (t--) {
        long long int n, k, b, s;
        cin >> n >> k >> b >> s;

        vector<long long int> output = generateArray(n, k, b, s);

        for (auto i : output) {
            std::cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}
