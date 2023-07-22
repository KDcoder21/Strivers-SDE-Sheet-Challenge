class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(),max_len=0;
        unordered_map<char,int> mp;

        for(int i=0,j=0;j<n;j++){
            if(mp[s[j]]>0){
                i=max(mp[s[j]],i);//i is starting index and we are starting our new string from fresh index which is maximum of both so we can we can get rid of that repeated character
            }
            max_len=max(max_len,j-i+1);//calculating length
            mp[s[j]]=j+1;//updating new index of that character
        }
        return max_len;
    }
};