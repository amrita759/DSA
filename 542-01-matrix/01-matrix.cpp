class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> ans = mat;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j] == 1){

                    int minDist = INT_MAX;

                     for(int x=0;x<mat.size();x++){
                     for(int y=0;y<mat[0].size();y++){

                        if(mat[x][y] == 0){ 
                        int distance = abs(x-i) + abs(y-j);
                        minDist = min(minDist,distance);
                     }
                     }
                }
                
                ans[i][j] = minDist;
                }
            }
        }
        return ans;
    }
};