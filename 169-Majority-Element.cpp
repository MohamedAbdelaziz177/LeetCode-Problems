class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int, int>freq;
        priority_queue<pair<int, int>>pq;

        for(int i = 0; i < nums.size(); i++) freq[nums[i]]++;
        for(auto e : freq) pq.push({e.second, e.first});

        return pq.top().second;
    }
};