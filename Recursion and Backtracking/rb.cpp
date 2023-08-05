#include "bits/stdc++.h"
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for(int i=a; i<b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)
#define io_fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void solve(){
    vector<vector<int>>v1(3,vector<int>(3));
    vector<int>A;
    for(int i=0;i<v1.size();i++){
        if(i%2)reverse(v1[i].begin(),v[i].end());
        for(int j=0;j<v[i].size();j++){
            A.push_back(v[i][j]);
        }
    }
    if (i == A.size() || j == B.size())
        return count;
     
    // If the current elements are equal, recursively check the next elements
    if (A[i] == B[j])
        count = LCS(i + 1, j + 1, A, B, count + 1);
     
    // Recursively check for the longest common subarray by considering two possibilities:
    // 1. Exclude current element from array A and continue with array B
    // 2. Exclude current element from array B and continue with array A
    count = max(count, max(LCS(i + 1, j, A, B, 0), LCS(i, j + 1, A, B, 0)));
     
    return count;
    
    
}

int main(){
    io_fast

    int t=1;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}



