class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<long long> prefixProduct(n);
        vector<long long> suffixProduct(n);
       

        for(int i = 0, j = n - 1; i < n; i++, j--)
        {
            if(i == 0)
            prefixProduct[i] = nums[i], suffixProduct[i] = nums[j];

            else prefixProduct[i] = nums[i] * prefixProduct[i - 1],
                 suffixProduct[i] = nums[j] * suffixProduct[i - 1];
        }

        vector<int> res(n);

        for(int i = 0; i < n; i++)
        {
            if(i != 0 && i != n - 1)
            res[i] = prefixProduct[i - 1] * suffixProduct[n - i - 2];

            else if(i == 0)
            res[i] = suffixProduct[n - 2];

            else res[i] = prefixProduct[n - 2];
        }

     
        return res;
        
    }
};