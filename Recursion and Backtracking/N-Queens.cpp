class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    bool isSafe(vector<vector<int>> &v,int x,int y,int n){
        for(int row = 0;row<x;row++){
            if(v[row][y] == 1) return false;
        }
        
        int row = x,col = y;
        while(row>=0 and col>=0){
            if(v[row][col]==1) return false;
            row--,col--;
        }
        
        row = x,col = y;
        while(row>=0 and col<n){
            if(v[row][col]==1) return false;
            row--,col++;
        }
        
        return true;
        
    }
    
    bool nQ(vector<vector<int>> &v,int x,int n){//x is row
        if(x>=n){
            ans.push_back(temp);
            return false;
        }
        
        for(int col=0;col<n;col++){
            if(isSafe(v,x,col,n)){
                v[x][col]=1;
                temp.push_back(col+1);
                if(nQ(v,x+1,n)){ return true;}
                temp.pop_back();
                v[x][col] = 0;
            }
        }
        return false;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<int>> v(n,vector<int>(n));
        nQ(v,0,n);
        vector<vector<string>> nq;
        vector<string> t;
        for(auto i: ans){
            for(auto c:i){
                string s = "";
                for(int j=0;j<n;j++){
                    s+='.';
                }
                s[c-1]='Q';
                t.push_back(s);
            }
            nq.push_back(t);
            t.erase(t.begin(),t.end());
        }
        //sort(ans.begin(),ans.end());
        return nq;
    }
};