class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if(s.size() == 1) 
        return 1;

        set<char>st;

        int l = 0, r = 0, mx = 0;

        while(r < s.size())
        {
            

            if(st.find(s[r]) == st.end())
            {
                st.insert(s[r]);
                r++;
            }

            else 
            {
                mx = max(mx, (int)st.size());

                while(st.find(s[r]) != st.end())
                st.erase(st.find(s[l])),
                l++;

                
            }
            
            if(r == s.size() )
            {
                mx = max(mx, (int)st.size());
                break;
            }
        }

        return mx;
        
    }
};