class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> m;
        int res = INT_MAX;
        
        // Count frequencies
        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }

        int maxV = INT_MIN, maxE;
        vector<int> v; 

        // Find the element(s) with the highest frequency
        for (auto x : m) {
            int a = x.first;
            int b = x.second;
            if (b > maxV) {
                maxV = b;
                maxE = a;
                v.clear();  // Clear the vector if we find a higher frequency
                v.push_back(a);
            }
            else if (b == maxV) {
                v.push_back(a); // Add elements with the same frequency
            }
        }

        // Iterate through the elements with the highest frequency
        for (int j = 0; j < v.size(); j++) {
            int ans = v[j];
            int lo = -1, up = -1;

            // Find the first occurrence of the element
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == ans) {
                    lo = i;
                    break;
                }
            }

            // Find the last occurrence of the element
            for (int i = nums.size() - 1; i >= 0; i--) {
                if (nums[i] == ans) {
                    up = i;
                    break;
                }
            }

            // Update the result with the minimum subarray length
            res = min(res, up - lo + 1);
        }

        return res;
    }
};