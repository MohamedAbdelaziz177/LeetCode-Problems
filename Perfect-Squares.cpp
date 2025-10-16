class Solution {
public:
    
    vector<long long>sq;
    long long mins[10004];
    int numSquares(int n) {
        for(int i = 1; i <= n; i++){
            if(i <= sqrt(n)){
                sq.push_back(i * i);
            }
        }

        memset(mins, -1, sizeof(mins));
        //mins.assign(10005, -1);
        return backtrack(n);
    }

    long long backtrack(int n)
    {
        if(n < 0)
        return INT_MAX;

        if(mins[n] != -1)
        return mins[n];

        if(n == 0)
        return 0;

        long long mn = INT_MAX;
        for(auto x : sq)
        {
            long long t = 1 + backtrack(n - x);
            mn = min(mn, t);
        }

        return mins[n] = mn;
    }
};