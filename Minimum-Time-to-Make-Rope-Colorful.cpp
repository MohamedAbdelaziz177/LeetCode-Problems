1class Solution {
2public:
3    
4    int minCost(string colors, vector<int>& v) {
5        int s = 0, mx = 0, gc = 0;
6        bool FIG = true;
7
8        for(int i = 0; i < colors.size(); i++) {
9            if(i > 0 && colors[i] == colors[i - 1]) {
10
11                if(FIG)
12                { 
13                    gc += (v[i] + v[i - 1]);
14                    mx = max(mx, max(v[i], v[i - 1]));
15                    FIG = false;
16                } else {
17                    gc += v[i];
18                    mx = max(mx, v[i]);
19                } 
20            } else {
21                s += gc - mx;
22                gc = 0;
23                mx = 0;
24                FIG = true;
25            }
26        }
27
28        s += (gc - mx);  
29        return s;
30    }
31};