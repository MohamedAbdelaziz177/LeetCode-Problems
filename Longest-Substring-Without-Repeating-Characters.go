1
2func lengthOfLongestSubstring(s string) int {
3    var (
4        l int = 0
5        r int = 0
6        ans int = 0
7        mp = make(map[byte]int)
8    )
9
10    
11
12    for r < len(s) {
13        mp[s[r]]++
14        for mp[s[r]] > 1{
15            mp[s[l]]--
16            l++
17        }
18        
19        if r - l + 1 > ans {
20            ans = r - l + 1
21        }
22        r++
23    }
24    return ans
25}