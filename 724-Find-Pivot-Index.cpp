class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        vector<int>F_pref(nums.size() + 2), R_pref(nums.size() + 2);
        F_pref[0] = 0;
        R_pref[0] = 0;

        for(int i = 1; i <= nums.size(); i++) 
        {
            F_pref[i] = F_pref[i - 1] + nums[i - 1];
        }

        reverse(nums.begin(), nums.end());

        for(int i = 1; i <= nums.size(); i++) 
        {
            R_pref[i] = R_pref[i - 1] + nums[i - 1];
        }

      
       
       // reverse(R_pref.begin(), R_pref.end());

        for(auto e : F_pref) cout << e << \ \;
        cout << \\
\;

        for(auto e : R_pref) cout << e << \ \;

        for(int i = 1; i <= nums.size(); i++)
        {
            if(F_pref[i - 1] == R_pref[R_pref.size() - i - 2])
            return i - 1;
        }

        return -1;
    }
};