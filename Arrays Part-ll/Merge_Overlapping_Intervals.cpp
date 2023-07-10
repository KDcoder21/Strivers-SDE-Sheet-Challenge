class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>sol;
         sort(intervals.begin(),intervals.end());
         sol.push_back(intervals[0]);
         int j=0;
         for(int i=1;i<intervals.size();i++){
             if(sol[j][1]>=intervals[i][0]){
                 sol[j][1] = max(intervals[i][1],sol[j][1]);
             }
             else if(sol[j][1]<intervals[i][0]){
                 sol.push_back(intervals[i]);j++;
             }
         }
         return sol;
    }
};