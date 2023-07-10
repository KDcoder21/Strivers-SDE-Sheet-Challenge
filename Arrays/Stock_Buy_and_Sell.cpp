class Solution {
public:
    int mini(int a,int b){
        if(a<b){
            return a;
        }return b;
    }
    int maxi (int a ,int b){
        if(a>b){
            return a;
        }else{
            return b;
        }
    }
    int maxProfit(vector<int>& prices) {
        int b=prices[0],d=0,md=0;
        for(int i=1;i<prices.size();i++){
            b=mini(b,prices[i]);
            d=prices[i]-b;
            md=maxi(d,md);
        }
        return md;
    }
};