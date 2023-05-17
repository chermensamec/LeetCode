
/***
https://leetcode.com/problems/two-sum/description/
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

***/
#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int> & nums,int  target) {
	std::unordered_map<int, int> map;
	std::vector<int> res;

	for (int i = 0; i < nums.size(); i++) {
	
		if (map.contains(target - nums[i])) {	
			res.push_back(map[target-nums[i]]);
			res.push_back(i);
			break;
		}
		map[nums[i]] = i;
	}
	return res;
}


/*int main() {
	int n, tmp, target;
	std::vector<int> nums;
	std::vector<int> res;

	std::cin >> n >> target;
	for(int i = 0; i < n; i++) {
		std::cin >> tmp;
		nums.push_back(tmp);
	}
	res = twoSum(nums, target);
	std::cout << res[0] << ' ' << res[1] << std::endl;
}*/
