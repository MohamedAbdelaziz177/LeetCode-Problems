func longestPalindrome(s string) string {
    
    for l := len(s); l >= 1; l-- {
        for i := 0; i < len(s); i++ {
            if i + l - 1 >= len(s) {
                break
            }

            if palidrome(s, i, i + l - 1) {
                return s[i : i + l]
            }
        }
    }

    return string(s[0])
}

func palidrome(s string, i, j int) bool {
    for i <= j {
        if s[i] != s[j] {
            return false;
        }

        i++;
        j--
    }

    return true
}