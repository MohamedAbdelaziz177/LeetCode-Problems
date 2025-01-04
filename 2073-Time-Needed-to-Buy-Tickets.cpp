
using namespace std;
class Solution {
public:
    int timeRequiredToBuy(vector<int>& v, int k) {
        deque<pair<int, bool>>q;

        for(int i = 0; i < v.size(); i++) 
        {
            if(i != k)
            q.push_back({v[i], false});
            else
            q.push_back({v[i], true});

        }

        int c = 0;
        while(!q.empty())
        {
            c++;
            
            int n = q[0].first - 1;

            if(n != 0){
                q.push_back({n, q[0].second});
            } 

            else if(q[0].second == true)
            {
                break;
            }

            q.pop_front();

            
        }

        return c;
    }
};