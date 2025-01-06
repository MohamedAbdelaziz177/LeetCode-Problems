class Solution {
public:
    
    static bool compare(string s, string ss)
    {
        return s + ss > ss + s;
    }
    
    string largestNumber(vector<int>& nums) {

        vector<string>v;

        for(int i = 0; i < nums.size(); i++)
        {
            string s = to_string(nums[i]);
            v.push_back(s);
        }

        sort(v.begin(), v.end(), compare);

        string ss =\\;

        for(auto s : v)
        {
            ss += s;
        }

        if(ss[0] == '0') return \0\;

        return ss;

        
    }
};