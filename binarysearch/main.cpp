#include <iostream>
#include <vector>
//704. Binary Search
//
//Easy
//
//        Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
//You must write an algorithm with O(log n) runtime complexity.
//
//Example 1:
//Input: nums = [-1,0,3,5,9,12], target = 9
//Output: 4
//Explanation: 9 exists in nums and its index is 4
//Example 2:
//Input: nums = [-1,0,3,5,9,12], target = 2
//Output: -1
//Explanation: 2 does not exist in nums so return -1
//
//Constraints:
//* 1 <= nums.length <= 104
//* -104 < nums[i], target < 104
//* All the integers in nums are unique.
//* nums is sorted in ascending order.

class Solution{
public:
    int search(std::vector<int>& nums, int target) {
        int low = 0;
        int hi = nums.size() - 1;
        while (low <= hi) {
            int mid = (low + (hi - low) / 2);
            if (nums[mid] < target)
                low = mid + 1;
            else if (nums[mid] > target)
                hi = mid - 1;
            else
                return mid;
        }
        return -1;
    }
};

int main() {
    std::vector<int> nums = {1,2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 7;
    Solution sol;

    int result = sol.search(nums, target);
    std::cout << result << std::endl;
}


