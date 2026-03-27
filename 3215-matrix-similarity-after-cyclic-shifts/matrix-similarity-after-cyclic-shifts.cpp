class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> ans=mat;
        for(int i=0;i<n;i++){
            if(i%2==0){
                for(int z=0;z<k;z++){
            for(int j=0;j<m-1;j++){
                swap(mat[i][j],mat[i][j+1]);
            }
                }
        }
        else {
              for(int z=0;z<k;z++){
             for(int j=m-1;j>0;j--){
                swap(mat[i][j],mat[i][j-1]);
            }
        }
        }
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ans[i][j]!=mat[i][j]){
                return false;
            }
        }
    }
    return true;
    }
};