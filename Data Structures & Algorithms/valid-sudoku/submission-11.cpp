class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9]{};
        bool cols[9][9]{};
        bool boxes[9][9]{};
        for (int y = 0; y < 9; y++)
        {
            for (int x = 0; x < 9; x++)
            {
                if ((board[y][x]) == '.') {continue;}
                int temp = board[y][x] - '1';
                int box = x / 3 + (y / 3) * 3;
                if (rows[x][temp] || cols[y][temp] || boxes[box][temp])
                {
                    return false;
                }
                rows[x][temp] = true;
                cols[y][temp] = true;
                boxes[box][temp] = true;
            }
        }
        return true;
    }
};
