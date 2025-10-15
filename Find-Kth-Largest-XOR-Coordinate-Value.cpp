class Solution {
public:
    int kthLargestValue(vector<vector<int>>& v, int k) {

        int n = v.size(), m = v[0].size();
        priority_queue< int, vector<int>, greater<int> >pq;

        for(int i = 0; i < n; i++)
        {
            for(int j = 1; j < m; j++)
            {
                v[i][j] = v[i][j-1] ^ v[i][j];
            }
        }

        for(int i = 0; i < m; i++)
        {
            for(int j = 1; j < n; j++)
            {
                v[j][i] = v[j - 1][i] ^ v[j][i];
            }
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(pq.size() < k)
                pq.push(v[i][j]);
                else
                {
                    if(pq.top() < v[i][j])
                    {
                        pq.pop();
                        pq.push(v[i][j]);
                    }
                }
            }
        }

        return pq.top();
    }
};