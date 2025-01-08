#include <iostream>
#include <vector>
#include <climits>  // For INT_MIN
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum = 0;
        int maxsum = INT_MIN;  // Initialize to the smallest possible value
        
        for (int val : nums) {
            currsum += val;         // Add current value to currsum
            maxsum = max(maxsum, currsum);  // Update maxsum if currsum is greater
            
            if (currsum < 0) {      // If currsum becomes negative, reset it
                currsum = 0;
            }
        }
        return maxsum;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};  // Example input
    cout << "The maximum subarray sum is: " << sol.maxSubArray(nums) << endl;
    
    return 0;
}
    