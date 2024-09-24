#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap; // Map to store number and its index
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i}; // Found the two indices
        }
        numMap[nums[i]] = i; // Store index of the current number
    }
    return {}; // In case no solution is found
}
