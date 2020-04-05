/*
 * [1] Two Sum
 *
 * https://leetcode-cn.com/problems/two-sum/description/
 *
 * algorithms
 * Easy (42.47%)
 * Total Accepted:    109.7K
 * Total Submissions: 258.3K
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * 给定一个整数数组和一个目标值，找出数组中和为目标值的两个数。
 * 
 * 你可以假设每个输入只对应一种答案，且同样的元素不能被重复利用。
 * 
 * 示例:
 * 
 * 给定 nums = [2, 7, 11, 15], target = 9
 * 
 * 因为 nums[0] + nums[1] = 2 + 7 = 9
 * 所以返回 [0, 1]
 * 
 * 
 */
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> r;
    unordered_map<int, int> hash;
    for (auto itHash = nums.begin(); itHash != nums.end(); ++itHash) {
      int key = itHash - nums.begin();
      hash[*itHash] = key;
    }
    for (auto it = nums.begin(); it != nums.end(); ++it) {
      auto complete = target - *it;
      auto search = hash.find(complete);
      if (search != hash.end() && it - nums.begin() != search->second) {
        r.push_back(it - nums.begin());
        r.push_back(search->second);
        return r;
      }
    }
    return r;
  }
};