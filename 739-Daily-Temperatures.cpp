class Compare {
public:
    bool operator()(pair<int, int> &a, pair<int, int> &b)
    {

        if(a.first > b.first) return true;
        else if(a.first < b.first) return false;

        return a.second < b.second;

    }
};

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& v) {

      stack<int> st;
      vector<int> ans(v.size());

      for(int i = 0; i < v.size(); i++)
      {
        while(!st.empty() && v[st.top()] < v[i])
        {
            ans[st.top()] = (i - st.top());
            st.pop();
        }

        st.push(i);
      }

      return ans;

    }
};