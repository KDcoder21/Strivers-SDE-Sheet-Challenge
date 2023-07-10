class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pos=-1,n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pos=i;break;
            }
        }
        for(int i=n-1;i>=pos && pos!=-1;i--){
            if(nums[i]>nums[pos]){
                swap(nums[i],nums[pos]);break;
            }
        }   
        reverse(nums.begin()+pos+1,nums.end());
    }
};