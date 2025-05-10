class Solution {
public:
    vector<bool> camelMatch(vector<string>& v, string t)  {
        
        vector<bool> ans;

        for(auto s : v)
           ans.push_back(checkSubsequensce(s, t));

        return ans;
    }
private:
    bool checkSubsequensce(string s, string t)
    {
        int c = 0;
        for(int i = 0; i < s.size(); i++)
        {           
            if(c < t.size() && s[i] == t[c])
            c++;
            
            else if(s[i] >= 'A' && s[i] <= 'Z')
            return false;
            
       }
        
        return c == t.size();
    }
};