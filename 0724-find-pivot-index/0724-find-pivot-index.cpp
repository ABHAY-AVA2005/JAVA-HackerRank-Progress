#include <vector>
#include <numeric> // For accumulate
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        int leftSum = 0;
        
        // Step 1: Calculate total sum
        for (int x : nums) totalSum += x;
        
        // Step 2: Iterate and compare
        for (int i = 0; i < nums.size(); i++) {
            // Right Sum is (totalSum - leftSum - nums[i])
            if (leftSum == totalSum - leftSum - nums[i]) {
                return i; // Found the balanced index
            }
            leftSum += nums[i]; // Update leftSum for the next index
        }
        
        return -1; // No balanced index found
    }
};