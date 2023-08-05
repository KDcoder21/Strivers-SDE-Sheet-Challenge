#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for(int i=a; i<b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
#define io_fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define loop(n) for(long long i=0;i<n;i++)
#define rloop(n) for(long long i=n-1;i>=0;i--)

void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    int d = n;
    vector<vector<int>> v;
    v.push_back({0,x,y+1});
    while(d--){
        for(int i=0;i<v.size();i++){
            v[i][0]++;
            if(v[i][0]==v[i][2]){
                reverse(v.begin(),v.end());
                v.pop_back();
                reverse(v.begin(),v.end());
                continue;
            }
            if(v[i][0]>=v[i][1] and v[i][0]<v[i][2]){
                v.push_back({v[i][0],v[i][0]+x,v[i][0]+y+1});
            }
        }
    }
    cout<<v.size()<<endl;
}

int main(){
    io_fast

    int t=1;
    while(t--){
        solve();
    }
    return 0;
}
