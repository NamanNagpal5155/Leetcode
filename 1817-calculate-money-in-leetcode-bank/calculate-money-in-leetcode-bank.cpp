class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        int weekStart = 1;

        for(int i = 0; i < n; i++) {
            total += weekStart + (i % 7);
            if(i % 7 == 6) {
                weekStart++;
            }
        }

        return total;
    }
};