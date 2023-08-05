class Solution {
public:
    int trap(vector<int>& a) {
        stack<int>st;int ans=0;
        for(int i=0;i<a.size();i++){
            while(!st.empty() && a[st.top()] <a[i]){
                int curr = st.top();
                st.pop();
                if(st.empty()){
                    break;
                }
                int diff = i-st.top()-1;
                ans +=( (min(a[st.top()],a[i])) -a[curr] ) *diff;
            }
            st.push(i);
        }
        return ans;
    }
};