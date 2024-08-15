//Leetcode 2sum problem
//Given an array of integers, return indices of the two numbers such that they add up to a specific target. repo
#include <iostream>
#include <vector> //for vector
#include <unordered_map> //for unordered_map
using namespace std;
int twosum(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (map.find(complement) != map.end()) {
            return map[complement], i;
        }
        map[nums[i]] = i;
    }
    return {};
}
int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twosum(nums, {target});
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}//practice 1