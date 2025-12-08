1func removeElement(a []int, val int) int {
2
3    var curr int = 0
4    for i := 0; i < len(a); i++ {
5        if a[i] == val {
6            a[i] = -1
7        } else {
8            a[curr] = a[i]
9            curr++
10        }
11    }
12
13    return curr
14}