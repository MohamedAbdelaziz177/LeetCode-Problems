class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char>st;
        st.push(s[0]);

      // char c = st.top();

        for(int i = 1; i < s.size(); i++)
        {
        
           
            if(!st.empty() && s[i] == st.top())
            st.pop();
            else st.push(s[i]);
        }

        string ss = "";

        while(!st.empty())
        {
            ss += st.top();
            st.pop();
        }

        reverse(ss.begin(), ss.end());

        return ss;
    }
};