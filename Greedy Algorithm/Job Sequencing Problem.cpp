/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    static bool comp(Job a,Job b){
        return a.profit>b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,comp);
        vector<int> vis(n);
        int jobcnt = 0,maxprofit=0;
        
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead-1;j>=0;j--){
                if(vis[j]) continue;
                else{
                    vis[j]=1;
                    maxprofit += arr[i].profit;jobcnt++;
                    break;
                }
            }
        }
        return {jobcnt,maxprofit};
    } 
};