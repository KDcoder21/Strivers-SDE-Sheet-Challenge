class Solution {
public:
    int majorityElement(vector<int>& a) {
        int size = a.size();
        map<int,int>mp;int flag=0,p;
        for(int i=0;i<size;i++){
            mp[a[i]]++;
        }
        for(int i=0;i<size;i++){
            if(mp[a[i]]>(size/2)){
                flag = 1;p=i;
            }
        }
        if(flag){
            return a[p];
        }
        return -1;
    }
};