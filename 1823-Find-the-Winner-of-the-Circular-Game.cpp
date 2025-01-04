class Solution {
public:
    int findTheWinner(int n, int k) {
        
        queue<int>q;
        queue<int>out;

        for(int i = 1; i <= n; i++) q.push(i);
        
        int i = 1;
        while(q.size() > 1)
        {

            cout << q.front() << " ";
           
            for(int i = 0; i < k - 1; i++)
            {
                int fr = q.front();
                q.pop();
                q.push(fr);
            }

            q.pop();
            

           //  if(q.size() == 1) return q.front();

           
        }

        return q.front();
    }
};