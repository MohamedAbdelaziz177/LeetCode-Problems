
class Solution {

public:

 vector<int>v;
 bool visited[1010] = {0};
 long long val[1010];

    int elevate(int i)
    {

        if(visited[i]) return val[i];

        if(i >= v.size())
        {
          //  mins.push_back(cost);
            return 0;
        }

       visited[i] = 1;

       
       val[i] = min((v[i] + elevate(i + 1)), (v[i] + elevate(i + 2)));
       
       return val[i];

    }
    int minCostClimbingStairs(vector<int>& cost ) {

        v = cost;

       int c1 =  elevate(0);

       memset(visited, 0, sizeof(visited));
       memset(val, -1, sizeof(val));

        int c2 = elevate(1);

        return min(c1, c2);
        
    }
};