class Solution {
public:
    int maxSubarraySumCircular(vector<int>& v) {
        
        int s = 0, ss = 0, mn = INT_MAX, mx = INT_MIN ,ts = 0;

        bool ALL_NEG = true;

        for(int i = 0; i < v.size(); i++)
        {
            
            if(s > 0) s = 0;

            if(ss < 0) ss = 0;

            s += v[i], ss += v[i];

            mn = min(mn, s);
            mx = max(mx, ss);

            ts += v[i];

            ALL_NEG &= (v[i] < 0);

        }

        if(ALL_NEG)
        return  *max_element(v.begin(), v.end());

        return max(ts - mn, mx);
    }
};