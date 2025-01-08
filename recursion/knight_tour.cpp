#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void func(vector<vector<int>>& grid, int row, int col, int n, vector<int>& sub, vector<vector<int>>& ans, vector<vector<int>>& visited) {
        if (row < 0 || col < 0 || row >= n || col >= n || visited[row][col] == 1) {
            return;
        }

        if (sub.size() == n * n) {
            ans.push_back(sub);
            
            visited[row][col] = 0;
            sub.pop_back();
            return;
        }


        visited[row][col] = 1;
        sub.push_back(grid[row][col]);

        for (int i = 0; i < sub.size(); ++i) {
            if (sub[i] != i) {
                visited[row][col] = 0;
                sub.pop_back();
                return;
            }
        }

        func(grid, row + 2, col - 1, n, sub, ans, visited); // Top-left
        func(grid, row + 2, col + 1, n, sub, ans, visited); // Top-right
        func(grid, row - 2, col - 1, n, sub, ans, visited); // Bottom-left
        func(grid, row - 2, col + 1, n, sub, ans, visited); // Bottom-right
        func(grid, row + 1, col - 2, n, sub, ans, visited); // Left-top
        func(grid, row - 1, col - 2, n, sub, ans, visited); // Left-bottom
        func(grid, row + 1, col + 2, n, sub, ans, visited); // Right-top
        func(grid, row - 1, col + 2, n, sub, ans, visited); // Right-bottom

        visited[row][col] = 0;
        sub.pop_back();
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> visited(n, vector<int>(n, 0));
        vector<int> sub;
        vector<vector<int>> ans;

        func(grid, 0, 0, n, sub, ans, visited);

        if (ans.size() == 1) {
            return true;
        }
        return false;
    }
};


int main() {
    // Sample grid for testing
    vector<vector<int>> grid = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };

    Solution solution;
    bool result = solution.checkValidGrid(grid);

    if (result) {
        cout << "The grid satisfies the condition." << endl;
    } else {
        cout << "The grid does not satisfy the condition." << endl;
    }

    return 0;
}
