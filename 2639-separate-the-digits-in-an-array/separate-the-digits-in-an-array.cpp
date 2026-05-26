class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {

        vector<int> v;

        for(int i=0;i<nums.size();i++){

            stack<int> s;
            int ans = nums[i];

            while(ans>0){
                int rem = ans % 10;
                s.push(rem);
                ans /= 10;
            }

            while(!s.empty()){
                v.push_back(s.top());
                s.pop();
            }
        }

        return v;
    }
};