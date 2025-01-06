class Solution {
public:
    void sortColors(vector<int>& nums) {

        int freq[3] = {0};

        for(int i = 0; i < nums.size(); i++) freq[nums[i]]++;

        
        int k = 0;
        nums.resize(0);

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < freq[i]; j++)
            {
                nums.push_back(i);
                //nums[k + i + j] = i;
            }
            k += 3;
        }
        

        
    }
};