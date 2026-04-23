class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();

        int c = nums[0];
        int s = nums[0];

        for (int i = 1; i < n; i++) {
            c = max(c + nums[i], nums[i]);
            s = max(s, c);
        }

        c = nums[0];
        int s1 = nums[0];

        for (int i = 1; i < n; i++) {
            c = min(c + nums[i], nums[i]);
            s1 = min(s1, c);
        }

        return max(abs(s), abs(s1));
    }
};