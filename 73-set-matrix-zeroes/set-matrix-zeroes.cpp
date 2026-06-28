class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     int rows=matrix.size();
     int col=matrix[0].size();
     vector<pair<int , int> > v;
     for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==0){
                v.push_back({i,j});
            }
        }
     }
     for(int i=0;i<v.size();i++){
        int row=v[i].first;
        int cols=v[i].second;
        for(int j=0;j<col;j++){
                matrix[row][j]=0;
            }
     for(int j=0;j<rows;j++){
                matrix[j][cols]=0;
            }
    }
    return;
    }
};