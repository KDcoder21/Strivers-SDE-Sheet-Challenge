class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        int size = a.size();
        map<int,int>mp;int flag=0,p;
        vector<int> sol;
        for(int i=0;i<size;i++){
            mp[a[i]]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->second>(size/3)){
                sol.push_back(i->first);
            }
        }
        return sol;
    }
};