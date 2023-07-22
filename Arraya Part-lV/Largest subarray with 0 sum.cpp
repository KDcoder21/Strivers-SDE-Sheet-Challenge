/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
    //     In the above example, after getting the prefix sum array, we are just traversing the array again and checking if any prefix sum repeats or not, and we found out that 15 is repeating means there are elements between(inclusive backside 15) both 15 & those sum are zero. 

    // Keypoints:
    // using map to store index of prefix.
    // using max function to get max out of all posibilities. 
        map<int,int> mp;int ans =0;
        for(int i=1;i<n;i++) A[i] += A[i-1];
        
        for(int i=0;i<n;i++){
            if(A[i]==0) ans = i+1;
            else if(mp.find(A[i])!=mp.end()) ans = max(ans,i-mp[A[i]]);
            else mp[A[i]]=i;
        }
        
        return ans;
    }
};














