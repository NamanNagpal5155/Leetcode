class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
        int minval=INT_MAX;
        int maxval=INT_MIN;
        for(int i=0;i<n;i++){
            minval=min(minval,nums[i]);
        }
        for(int i=0;i<n;i++){
            maxval=max(maxval,nums[i]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=maxval && nums[i]!=minval){
                return nums[i];
            }
        }
        return -1;
    }
};