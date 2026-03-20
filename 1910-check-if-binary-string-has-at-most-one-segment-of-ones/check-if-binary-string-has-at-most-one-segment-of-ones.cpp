class Solution {
public:
    bool checkOnesSegment(string s) {
        int c=0;
        for(int i=1;i<s.size();i++){
            if(s[i]=='1'){
                c++;
                }
        }
        if(s.size()==1 && s[0]=='1') return true;
        string t=s;
        sort(t.begin(),t.end(),greater<char>());
        if(t==s) return true;
        else return false;
        // if(c>0){
        //     int i=0,j=s.size()-1;
        //     while(i<j){
        //         if(s[i]=='1'){
        //             i++;
        //         }
        //         else if(s[j]=='0'){
        //             j--;
        //         }
        //         else if(s[i]=='0' && s[j]=='1'){
        //             return false ;
        //             break;
        //         }
        //     }
        //      return true;}
        // else if(c==0) return true;
        // else return false;
    }
};