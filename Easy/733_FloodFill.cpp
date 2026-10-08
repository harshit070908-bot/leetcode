#include <vector>

class Solution {
public:
    void fill(std::vector<std::vector<int>>& image, int sr, int sc, int color, int val) {
        if(sr < 0 || sc < 0 ||
           sr >= image.size() || sc >= image[0].size() ||
           image[sr][sc] != val) {
            return;
        }

        image[sr][sc] = color;

        fill(image, sr + 1, sc, color, val);
        fill(image, sr - 1, sc, color, val);
        fill(image, sr, sc + 1, color, val);
        fill(image, sr, sc - 1, color, val);
    }

    std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>>& image, int sr, int sc, int color) {
        int val = image[sr][sc];

        if(val == color) return image;

        fill(image, sr, sc, color, val);

        return image;
    }
};