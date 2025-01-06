
#define PII pair<int, int>
class Compare {
public:
       bool operator()(PII &a, PII &b)
       {

        if(a.first > b.first) return true;
        else if(a.first < b.first) return false;

        return a.second > b.second;

       }
};

class Solution {

public:
   
    

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, Compare> pq;
      // priority_queue<pair<int, int>> pq;
        for(int i = 0; i < mat.size(); i++)
        {
            int s = 0;
            for(int j = 0; j < mat[0].size(); j++)
            {
                s += mat[i][j];
            }

            pq.push({s, i});
        }

        vector<int> ans;

        int i = 0;

        while(i != k)
        {
            if(!pq.empty())
            ans.push_back(pq.top().second),
            pq.pop();
            i++;
        }

        return ans;
    }
};