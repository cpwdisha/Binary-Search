class Solution {
public:
    int binarySearch(int start, int end, vector<int>& nums, int target) {
        while (start <= end) {
            int m = start + (end - start) / 2;
            if (nums[m] == target) {
                return m;
            } else if (nums[m] < target) {
                start = m + 1;
            } else {
                end = m - 1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0, e = n - 1;

        // Find the pivot point where the array is rotated
        while (s < e) {
            int m = s + (e - s) / 2;
            if (nums[m] > nums[e]) {
                s = m + 1;
            } else {
                e = m;
            }
        }

        int pivot = s;

        // Perform binary search in the correct half
        int ans = binarySearch(0, pivot - 1, nums, target);
        if (ans == -1) {
            ans = binarySearch(pivot, n - 1, nums, target);
        }
        return ans;
    }
};
