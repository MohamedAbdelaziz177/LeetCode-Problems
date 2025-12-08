1func subsets(a []int) [][]int {
2    
3    var res[][]int
4
5    for i := 0; i < (1 << len(a)); i++ {
6        var arr[]int
7        for j := 0; j < len(a); j++ {
8            if (1 << j) & i != 0 {
9                arr = append(arr, a[j])
10            }
11        }
12
13        res = append(res, arr)
14    }
15
16    return res
17}