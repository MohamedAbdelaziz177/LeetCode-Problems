class Solution {
public:
    string removeOccurrences(string s, string part) {

        stack<char>st;
        string ss = "";
        for(int i = 0; i < s.size(); i++)
        {
            st.push(s[i]);
            ss += s[i];

           // if(ss.size() > part.size()) ss.erase(0, 1);
           string sss = (ss.size() > part.size())? 
           ss.substr(ss.size() - part.size(), part.size()) : ss;

           cout << sss << " ";
            if(sss == part)
            {
                int n = part.size();
                while(n--)
                {
                    st.pop();
                }

               // sss = "";

                int t = part.size();
                while(t--) ss.pop_back();
            }
            
            
        }

        string res = "";

        while(!st.empty())
        {
            res += st.top();
            st.pop();
        }

        reverse(res.begin(), res.end());
        return res;
    }
};