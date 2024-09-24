#include <vector>
#include <algorithm>

int maxSubArray(std::vector<int>& nums) {
    int maxSum = nums[0]; // Initialize with the first element
    int currentSum = nums[0]; // Initialize the current sum
    for (int i = 1; i < nums.size(); ++i) {
        currentSum = std::max(nums[i], currentSum + nums[i]); // Update current sum
        maxSum = std::max(maxSum, currentSum); // Update maximum sum
    }
    return maxSum;
}
