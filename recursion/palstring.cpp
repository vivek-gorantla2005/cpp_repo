#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool ispal(string &s, int start, int end) {
        while (start < end) {
            if (s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    void func(string &s, int index, vector<string> &current, vector<vector<string>> &result) {
        if (index == s.length()) {
            result.push_back(current);
            return;
        }
        for (int i = index; i < s.length(); i++) {
            if (ispal(s, index, i)) {
                current.push_back(s.substr(index, i - index + 1));
                func(s, i + 1, current, result);
                current.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> result; 
        vector<string> current;      
        func(s, 0, current, result);
        return result;
    }
};

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    Solution solution;
    vector<vector<string>> partitions = solution.partition(input);

    cout << "\nPalindrome Partitions:" << endl;
    for (const auto &partition : partitions) {
        cout << "[ ";
        for (const string &palindrome : partition) {
            cout << "\"" << palindrome << "\" ";
        }
        cout << "]" << endl;
    }

    return 0;
}
