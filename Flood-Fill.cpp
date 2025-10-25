class Solution {
public:
    vector<vector<int>> colors;
    int color;
    int oldColor;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        this -> colors = image;
        this -> color = color;
        this -> oldColor = image[sr][sc];

        if(image[sr][sc] == color)
        return image;

        dfs(sr, sc);
        return colors;
    }

    void dfs(int i, int j)
    {
        colors[i][j] = color;

        if(valid(i + 1, j))
        dfs(i + 1, j);

        if(valid(i, j + 1))
        dfs(i, j + 1);

        if(valid(i - 1, j))
        dfs(i - 1, j);

        if(valid(i, j - 1))
        dfs(i, j - 1);
    }

    bool valid(int i, int j)
    {
        return i < colors.size() &&
               j < colors[0].size() &&
               colors[i][j] == oldColor;
    }
};