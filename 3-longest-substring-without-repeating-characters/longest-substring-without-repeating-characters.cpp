class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0) return 0;
        if(n==1)return 1;
        int i=0,j=1,l=1;
        unordered_set<int> us;
        us.insert(s[i]);
        while(j<n && i<=j){
            while(j<n && us.find(s[j])==us.end()){
                us.insert(s[j]);
                j++;
            }
            if(j-i > l) {
                l=j-i;
            }
            us.erase(s[i]);
            i++;
        }
        return l;
    }
};