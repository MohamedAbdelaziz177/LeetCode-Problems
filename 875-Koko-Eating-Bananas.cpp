class Solution {
public:
    
    bool valid(vector<int>& v, int h, int mid)
    {
        long long totalHrs = 0;

        for(auto e : v)
        {
            totalHrs += (e / mid) + (bool)(e % mid);
        } 

        return totalHrs <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        


        int l = 1, r = 1000000008, mid, ans = -1;
        while(l <= r)
        {
            mid = (l + r) / 2;

            if(valid(piles, h, mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }

        return ans;
    }
};