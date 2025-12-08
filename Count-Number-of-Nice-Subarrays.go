1func numberOfSubarrays(a []int, k int) int {
2    return atMost(a, k) - atMost(a, k - 1);
3}
4
5func atMost(a []int, k int) int {
6    var (
7        l int = 0
8        r int = 0
9        ans int = 0
10        c int = 0
11    )
12
13    for r < len(a) {
14        if a[r] % 2 != 0 {
15            c++
16        }
17
18        for c > k {
19            
20            if a[l] % 2 != 0 {
21                c--
22            }
23            l++
24        }
25
26        ans += (r - l + 1) 
27        r++
28    }
29
30    return ans
31 }