class Solution{

	public:
	int recur(int sum,int i,int coins[],int M,vector<vector<int>>&dp)
	{
	    if(sum<0 or i==M)
	        return 1e8;
	    if(sum==0)
	        return 0;
	    if(dp[i][sum]!=-1)
	        return dp[i][sum];
	    int pick=recur(sum-coins[i],i,coins,M,dp)+1;
	    int not_pick=recur(sum,i+1,coins,M,dp);
	    return dp[i][sum]=min(pick,not_pick);
	}
	int minCoins(int coins[], int M, int V) 
	{ 
	    vector<vector<int>>dp(M+1,vector<int>(V+1,-1));
	    if(recur(V,0,coins,M,dp)>=1e8)
	    return -1;
	    return recur(V,0,coins,M,dp);
	} 
	  
};