class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        vector<int>sizes;

        for(auto e : strs) sizes.push_back(e.size());

        int mnSize = *min_element(sizes.begin(), sizes.end());

        bool flg = 0;
        
        string s = \\;
        for(int i = 0; i <  mnSize && !flg; i++)
        {
           
            char c = strs[0][i];
            for(int j = 0; j < strs.size() ; j++)
            {
                if(strs[j][i] != c) 
                {
                    flg = true;
                    break;
                }

                
            }

            if(!flg) s += c;
        }

        return s;
    }
};