#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    void merge(vector<int> &nums, int st, int mid, int end) {
        vector<int> temp;
        int i = st, j = mid + 1;

        while (i <= mid && j <= end) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            } else {
                temp.push_back(nums[j]);
                j++;
            }
        }

        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }
        while (j <= end) {
            temp.push_back(nums[j]);
            j++;
        }

        for (int k = 0; k < temp.size(); k++) {
            nums[st++] = temp[k];
        }
    }

    void mergeSort(vector<int> &nums, int st, int end) {
        int mid = st + (end - st) / 2;
        if (st < end) {
            mergeSort(nums, st, mid);       // left half
            mergeSort(nums, mid + 1, end);  // right half
        }
        merge(nums, st, mid, end);
    }
};

int main() {
    int n;
    cin >> n;

    int st = 0;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    sol.mergeSort(nums, st, n - 1);

    for (auto v : nums) {
        cout << v << " ";
    }
    cout << endl;

    return 0;
}
