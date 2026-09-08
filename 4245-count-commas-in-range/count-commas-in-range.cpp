class Solution {
public:
    int countCommas(int n) {
       string s=to_string(n);
       if(s.size()<4) return 0;
       if(s.size()==4) return n-1000+1;
       if(s.size()==5) return 9000+(n-10000+1);
       if(s.size()==6) return 99000+(n-100000+1);
       return -1;
    }
};