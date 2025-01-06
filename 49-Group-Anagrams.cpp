class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& a) {
        
      vector<string>v;
      map<string, vector<string>>mp;

      for(string e : a)
      {
        string s = e;
        sort(s.begin(), s.end());
        mp[s].push_back(e);
      }

      vector<vector<string>> ans;
      for(auto x : mp)
      {
        ans.push_back(x.second);
      }

      return ans;




    }
};