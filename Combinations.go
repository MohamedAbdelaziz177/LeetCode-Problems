1func combine(n int, k int) [][]int {
2
3    var res[][] int
4    for mask := 0; mask < (1 << n); mask++ {
5        if countOnes(mask) == k {
6            var arr = make([]int, 0, k)
7            for i := 0; i < n; i++ {
8                if (1 << i) & mask != 0 {
9                    arr = append(arr, i + 1)
10                
11                }
12            }
13            res = append(res, arr)
14        }
15    }
16
17    return res
18}
19
20func countOnes(n int) int {
21    var c int = 0
22    for n > 0 {
23        c += (n & 1)
24        n >>= 1
25    }
26    return c;
27}