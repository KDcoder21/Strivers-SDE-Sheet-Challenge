class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int target = -nums[i],front=i+1,back=nums.size()-1;
            while(front<back){
                int sum = nums[front]+nums[back];
                if(sum<target) front++;
                else if(sum>target) back--;
                else{
                    vector<int> sol = {nums[i],nums[front],nums[back]};
                    result.push_back(sol);
                    while(front<back and nums[front]==sol[1]) front++;
                    while(front<back and nums[back]==sol[2]) back--;
                }
            }
            while(i< nums.size()-1 and nums[i+1]==nums[i]) i++;
        }
        return result;
    }
};