#include<iostream>
#include<vector>
using namespace std;

void helper(vector<vector<int>>& mat, int row, int col, string path, vector<string>& ans) {
    int n = mat.size();
    
    // Check if the current cell is out of bounds or is blocked (0)
    if (row < 0 || col < 0 || row >= n || col >= n || mat[row][col] == 0) {
        return; 
    }
    
    // If we've reached the destination (bottom-right corner)
    if (row == n-1 && col == n-1) {
        ans.push_back(path);
        return;
    }

    // Mark this cell as visited by blocking it (so we don't revisit it)
    mat[row][col] = 0;
    
    // Move Down
    helper(mat, row+1, col, path+"D", ans);
    
    // Move Left
    helper(mat, row, col-1, path+"L", ans);
    
    // Move Right
    helper(mat, row, col+1, path+"R", ans);
    
    // Move Up
    helper(mat, row-1, col, path+"U", ans);
    
    // Unmark this cell as visited for other paths (backtracking)
    mat[row][col] = 1;
}

int main() {
    vector<vector<int>> mat = {{1, 1, 0, 0},
                                {1, 1, 0, 1},
                                {0, 1, 1, 1},
                                {1, 1, 1, 1}};
    vector<string> ans;
    
    helper(mat, 0, 0, "", ans);
    
    for (const string& path : ans) {
        cout << path << endl;
    }

    return 0;
}
