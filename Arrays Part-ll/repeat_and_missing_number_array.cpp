vector<int> Solution::repeatedNumber(const vector<int> &A) {

    long long sum = 0;

    long long n = A.size();

    long long tt = (n*(n+1))/2;

    int x = 0,y = 0;

    long long tt2 = (n*(n+1)*((2*n)+1))/6;

    //long long sum1 = tt,sum2 = tt2;

    for(auto e:A){

        tt-=(long long)e;

        tt2 -= ((long long)e*(long long)e);

    }

    x = (tt2-(tt*tt))/(2*tt);

    y = (tt+x);

    return {x,y};

}