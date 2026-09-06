func isValidSudoku(board [][]byte) bool {
    type Cell struct {
        index int
        value byte
    }

    rowFreq := make(map[Cell]bool)
    colFreq := make(map[Cell]bool)
    subboxFreq := make(map[Cell]bool)

    for i := 0; i < 9; i++ {
        for j := 0; j < 9; j++ {
            c := board[i][j]

            if c != '.' {
                rowKey := Cell{i, c}
                colKey := Cell{j, c}
                subboxKey := Cell{getsubBoxRank(i, j), c}

                if rowFreq[rowKey] {
                    return false
                }
                rowFreq[rowKey] = true

                if colFreq[colKey] {
                    return false
                }
                colFreq[colKey] = true

                if subboxFreq[subboxKey] {
                    return false
                }
                subboxFreq[subboxKey] = true
            }
        }
    }

    return true
}

func getsubBoxRank(i, j int) int {
    return (i/3)*3 + j/3
}