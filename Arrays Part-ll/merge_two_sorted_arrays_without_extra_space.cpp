class Solution {
public:
    void merge(vector<int>& ar1, int m, vector<int>& ar2, int n) {
        int i = m-1, j = n-1, k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (ar1[i] < ar2[j])
            ar1[k--] = ar2[j--];
        else {
            ar1[k--] = ar1[i--];
        }
    }
    while(j>=0){
        ar1[k--] = ar2[j--];
    }
    }
};