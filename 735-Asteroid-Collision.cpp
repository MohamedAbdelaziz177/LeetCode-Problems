class Solution {
public:
    vector<int> asteroidCollision(vector<int>& v) {
        
        stack<pair<int, int>>st, stt;

        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] < 0)
            {

                    if(st.empty()) 
                    {
                        stt.push({v[i], i});
                        continue;
                    }

                     stt.push({v[i], i});

                     while(!st.empty())
                     {
                        if(abs(v[i]) > st.top().first)
                        st.pop();
                        else if(abs(v[i]) < st.top().first)
                        {
                            stt.pop();
                            break;
                        } 
                        else
                        {
                            st.pop();
                            stt.pop();
                            break;
                        }
                     }  

                

               
            }


            else st.push({v[i], i});
        }

        vector<pair<int, int>> ans;

        while(!st.empty())
        {
            ans.push_back({st.top().second, st.top().first});
            st.pop();
        }

         while(!stt.empty())
        {
            ans.push_back({stt.top().second, stt.top().first});
            stt.pop();
        }

        sort(ans.begin(), ans.end());
        

        vector<int> anss;

        for(auto e : ans) anss.push_back(e.second);

        return anss;
    }
};