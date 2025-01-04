class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack<char>st, stt;

      //  string s1 = "", s2 = "";

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != '#') st.push(s[i]);
            else if(!st.empty()) st.pop();
        }

        for(int i = 0; i < t.size(); i++)
        {
            if(t[i] != '#') stt.push(t[i]);
            else if(!stt.empty()) stt.pop();
        }

        return st == stt;
    }
};