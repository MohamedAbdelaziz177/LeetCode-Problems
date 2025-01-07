class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        

        string ss = \\;
        map<string, int>mp;

        for(int i = 0; i < s.size(); i++)
        {
            
            
            ss += s[i];

            if(i >= 9)
            {
                mp[ss]++;
                ss.erase(0, 1);
            }
        }

        vector<string> ans;

        for(auto x : mp)
        {
            if(x.second > 1) ans.push_back(x.first);
        }

        return ans;
    }
};