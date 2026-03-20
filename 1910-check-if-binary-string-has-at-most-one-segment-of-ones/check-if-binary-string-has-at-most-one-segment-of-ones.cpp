class Solution {
public:
    bool checkOnesSegment(string s) {
        string t=s;
        sort(t.begin(),t.end(),greater<char>());
        if(t==s) return true;
        else return false;
    }
};