class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        s += \ \;

        auto pos = s.find(' ');

        vector<string>v;

        while(pos != string::npos)
        {
            string ss = s.substr(0, pos);
            v.push_back(ss);

            s.erase(0, pos + 1);

            pos = s.find(' ');
        }

        if(v.size() != pattern.size()) return false;

        for(int i = 0; i < v.size(); i++) cout << v[i] << \ \;


        map<char, string>mp;
        map<string, char> mpp;

        for(int i = 0; i < v.size(); i++)
        {
             if(mp.find(pattern[i]) == mp.end() && mpp.find(v[i]) == mpp.end())
            mp[pattern[i]] = v[i],
            mpp[v[i]] = pattern[i];

            else if(mp[pattern[i]] != v[i] || mpp[v[i]] != pattern[i])
            {
                return false;
            }

            
        }

        return true;
        
    }
};