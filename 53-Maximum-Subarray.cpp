class Solution {
public:
    int maxSubArray(vector<int>& a) {

        long long sum = 0, ans = 0;

        for(int i = 0; i < a.size(); i++)
        {
            sum = max(sum, 0LL);

            sum += a[i];
            ans = max(ans, sum);
        }


        return (ans != 0) ? ans : *max_element(a.begin() , a.end());
        
    }
};