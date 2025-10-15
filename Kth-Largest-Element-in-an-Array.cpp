class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
        map<int, int>freq;

        for(int i = 0; i < v.size(); i++)
        freq[v[i]]++;

        int order = 0;

        for(auto i : freq)
        {
            order += i.second;
            if(order >= (v.size() - k + 1))
            return i.first;
        }

        return 0;
    }
};