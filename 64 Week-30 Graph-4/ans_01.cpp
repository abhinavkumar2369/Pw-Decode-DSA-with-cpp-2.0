#include <vector>
using namespace std;

void dfs(vector<vector<int>>& image, int sr, int sc, int color, int originalColor) {
    if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] != originalColor) {
        return;
    }
    image[sr][sc] = color;
    dfs(image, sr + 1, sc, color, originalColor);
    dfs(image, sr - 1, sc, color, originalColor);
    dfs(image, sr, sc + 1, color, originalColor);
    dfs(image, sr, sc - 1, color, originalColor);
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    if (image[sr][sc] != color) {
        dfs(image, sr, sc, color, image[sr][sc]);
    }
    return image;
}
