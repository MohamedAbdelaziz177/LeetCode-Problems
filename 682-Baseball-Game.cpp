class Solution {
public:
    int calPoints(vector<string>& a) {
        
        stack<int>st;

        for(int i = 0; i < a.size(); i++)
        {
            if(a[i] != \C\ && a[i] != \D\ && a[i] != \+\)
            {
                st.push(stoi(a[i]));
            }

            else if(a[i] == \+\)
            {
                int n = st.top();
                st.pop();

                int m = st.top();
                st.pop();

                st.push(m);
                st.push(n);
                st.push(n + m);
            }

            else if(a[i] == \D\)
            {
                int n = st.top();
               
                st.push(2 * n);
            }

            else 
            {
                st.pop();
            }
        }

        long long s = 0;

        vector<int>v;
        while(!st.empty())
        {
            cout << st.top() << \ \;
            s += st.top();
            st.pop();
        }



        return s;
    }
    
};