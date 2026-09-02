class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {

        int count = 0;

        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
         
             if(mat[i][j] == 1){

                int rowCount = 0;
                int colsCount = 0;

                for(int k=0;k<mat[0].size();k++){
                if(mat[i][k]==1){
                    rowCount++;
                }
             }
               for(int k=0;k<mat.size();k++){
                if(mat[k][j]==1){
                    colsCount++;
                }
        }
     
       if(rowCount == 1 && colsCount ==1){
        count++;
       }
     }
  }
 }
       return count;
    }
};