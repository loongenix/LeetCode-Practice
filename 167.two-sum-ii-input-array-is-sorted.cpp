/*
 * [167] Two Sum II - Input array is sorted
 *
 * https://leetcode-cn.com/problems/two-sum-ii-input-array-is-sorted/description/
 *
 * algorithms
 * Easy (41.78%)
 * Total Accepted:    8.1K
 * Total Submissions: 19.3K
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * 给定一个已按照升序排列 的有序数组，找到两个数使得它们相加之和等于目标数。
 * 
 * 函数应该返回这两个下标值 index1 和 index2，其中 index1 必须小于 index2。
 * 
 * 说明:
 * 
 * 
 * 返回的下标值（index1 和 index2）不是从零开始的。
 * 你可以假设每个输入只对应唯一的答案，而且你不可以重复使用相同的元素。
 * 
 * 
 * 示例:
 * 
 * 输入: numbers = [2, 7, 11, 15], target = 9
 * 输出: [1,2]
 * 解释: 2 与 7 之和等于目标数 9 。因此 index1 = 1, index2 = 2 。
 * 
 */
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;
        vector<int> res;
        
        while(left<right){
            int temp=numbers[left]+numbers[right];
            if(temp>target){
                right--;
            }else if(temp==target){
               break; 
            }else{
                left++;
            }
        }

        res.push_back(left+1);
        res.push_back(right+1);
        return res;
        
    }
};
