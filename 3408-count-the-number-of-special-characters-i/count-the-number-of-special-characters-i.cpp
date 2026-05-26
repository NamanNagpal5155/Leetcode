class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char> s;

        for(auto c : word){
            s.insert(c);
        }

        int count = 0;

        for(auto c : s){
            if(islower(c) && s.find(toupper(c)) != s.end()){
                count++;
            }
        }

        return count;
    }
};