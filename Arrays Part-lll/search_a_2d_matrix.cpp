class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(),col = matrix[0].size(),row_no=-1;
        for(int i=0;i<row;i++){
            if(matrix[i][col-1]>=target){
                row_no = i;break;
            }
        }
        for(int i=0;i<col;i++){
            if(row_no!=-1)
            if(matrix[row_no][i]==target) return 1;
        }
        return 0;
    }
};