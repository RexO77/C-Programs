//Leetcode 2sum problem
//Given an array of integers, return indices of the two numbers such that they add up to a specific target.
#include <iostream>
#include <vector>
#include <unordered_map>
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