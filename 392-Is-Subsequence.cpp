

class Solution {
   
public:
   
   string s,t;
 
    map<pair<string, int>, int> val;
    map<pair<string, int>, int> vis;

    int check(string ss = \\, int i = 0)
    {
        if(vis[{ss, i}])
        return val[{ss, i}];

        if(i == t.size())
        {
            return  (ss == s);
        } 

        vis[{ss, i}] = 1;

        

       int c1 =  check(ss + t[i], i + 1);
       int c2 = check(ss, i + 1);

       

       return val[{ss, i}] = c1 + c2;
    }
    bool isSubsequence(string s, string t) {
        this -> s = s, this -> t = t;

     //   memset(val, -1, sizeof(val));

       // int n = check();

       int curr = 0, c = 0;

       for(int i = 0; i < t.size(); i++)
       {
         if(t[i] == s[curr]) c++, curr++;

         if(c == s.size()) return 1;
       }

        return s == t ? 1 : 0;


    }
};