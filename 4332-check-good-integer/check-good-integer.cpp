class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum=0 , sum1=0;
        while(n>0){
            int r=n%10;
            sum+=r*r;
            sum1+=r;
            n/=10;
        }
        if(sum-sum1>=50) return true;
        else return false;
    }
};