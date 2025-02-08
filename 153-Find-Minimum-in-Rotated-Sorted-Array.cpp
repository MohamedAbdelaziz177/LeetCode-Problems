class Solution {
public:
    int findMin(vector<int>& v) {
        
        int l = 0, r  = v.size() - 1, mid, ans = -1;

        while(l < r)
        {
            mid = (l + r) / 2;

            if(v[mid] > v[r])
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }

        return v[l];

    }
};