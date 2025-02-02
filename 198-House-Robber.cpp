class Solution {
public:
    int maxes[105];
    vector<int> v;
    
    int dp(int i = 0)
    {
        if(i >= v.size()) return 0;

        if(maxes[i] != -1) return maxes[i];

      

        int s1 = v[i] + dp(i + 2);
        int s2 = dp(i + 1); 
        
        cout << i << \ \;

        return maxes[i] = max(s1, s2);
    }
    int rob(vector<int>& nums) {
        
        memset(maxes, -1, sizeof(maxes));
        v = nums;
        return dp();
    }
};