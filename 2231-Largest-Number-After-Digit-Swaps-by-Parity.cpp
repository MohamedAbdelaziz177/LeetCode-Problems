class Solution {
public:
    int largestInteger(int num) {
        
        string s = to_string(num);

        priority_queue<char> pq, pqq;

        for(int i = 0; i < s.size(); i++)
        !((s[i] - '0') & 1)? pq.push(s[i]) : pqq.push(s[i]);


        
        string ans1 = "", ans2 = "", ans = "";
        
        int i = -1;
        while(!pq.empty() || !pqq.empty())
        {
            i++;
            if((s[i] - '0') % 2 == 0)
            {
                ans += pq.top();
                pq.pop();
            }

            else
            {
                ans += pqq.top();
                pqq.pop();
            }
           
        }

    
       

        return stoi(ans);
    }
};