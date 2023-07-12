class Solution {
public:
int smallestDistancePair(vector<int>& nums, int k) {
sort(nums.begin(), nums.end());

int n = nums.size();
int l = 0;
int r = nums[n - 1] - nums[0];

while (l < r) {
    int m = l + (r - l) / 2;
    int count = 0;
    int j = 0;

    for (int i = 0; i < n; i++) {
        while (j < n && nums[j] - nums[i] <= m) {
            j++;
        }
        count += j - i - 1;
    }

    if (count < k) {
        l = m + 1;
    } else {
        r = m;
    }
}

return l;
}
};
