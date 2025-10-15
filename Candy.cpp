class Solution {
public:
    int candy(vector<int>& v) {

        int ans = 0, n = v.size();
        vector<int>c(n);
        c.assign(n, 1);

        for (int i = 1; i < n; i++) {
            if (v[i] > v[i-1]) 
                c[i] = c[i-1] + 1;
        }

        for (int i = n-2; i >= 0; i--) {
            if (v[i] > v[i+1])
                c[i] = max(c[i], c[i+1] + 1);
        }

        for (int i : c) ans += i;

        return ans;
    }
};