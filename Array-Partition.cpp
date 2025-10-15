class Solution {
public:
    int arrayPairSum(vector<int>& v) {
        
        sort(v.begin(), v.end());

        int ans = 0;
        for(int i = v.size() - 1; i > 0; i-=2)
        {
            ans += min(v[i], v[i - 1]);
        }

        return ans;
    }
};