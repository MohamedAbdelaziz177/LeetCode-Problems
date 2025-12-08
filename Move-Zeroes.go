1func moveZeroes(a []int)  {
2    var curr int = 0
3    var c int = 0
4    for i := 0; i < len(a); i++ {
5        if a[i] == 0 {
6            c++;
7        } else {
8            a[curr] = a[i]
9            curr++
10        }
11    }
12
13    for i := curr; i < len(a); i++ {
14        a[i] = 0
15    }
16
17}