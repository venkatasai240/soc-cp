#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool valid(vector<int>& arr, int n, int k, int ans) {
int subarrays = 1;
int sum = 0;

for (int i = 0; i < n; i++) {
if (arr[i] > ans) {
    return false;  
}

if (sum + arr[i] > ans) {
    subarrays++;
    sum = arr[i];
} else {
    sum += arr[i];
}
}

return subarrays <= k;
}

int maxsum(vector<int>& arr, int n, int k) {
int l = *max_element(arr.begin(), arr.end());
int r = 0;

for (int i = 0; i < n; i++) {
r += arr[i];
}

int result = 0;

while (l <= r) {
int m = l + (r - l) / 2;

if (valid(arr, n, k, m)) {
    result = m;
    r = m - 1;
} else {
    l = m + 1;
}
}

return result;
}

int main() {
int n, k;
cin >> n >> k;

vector<int> arr(n);

for (int i = 0; i < n; i++) {
cin >> arr[i];
}

int ans = maxsum(arr, n, k);

cout << ans << endl;

return 0;
}
