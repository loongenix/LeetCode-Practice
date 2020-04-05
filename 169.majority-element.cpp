/*
 * [169] Majority Element
 *
 * https://leetcode-cn.com/problems/majority-element/description/
 *
 * algorithms
 * Easy (52.13%)
 * Total Accepted:    9.2K
 * Total Submissions: 17.7K
 * Testcase Example:  '[3,2,3]'
 *
 * 给定一个大小为 n 的数组，找到其中的众数。众数是指在数组中出现次数大于 ⌊ n/2 ⌋ 的元素。
 * 
 * 你可以假设数组是非空的，并且给定的数组总是存在众数。
 * 
 * 示例 1:
 * 
 * 输入: [3,2,3]
 * 输出: 3
 * 
 * 示例 2:
 * 
 * 输入: [2,2,1,1,1,2,2]
 * 输出: 2
 * 
 * 
 */
#include <unordered_map>
#include <vector>
using namespace std;
class Solution
{
  public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> map;

        for (auto &&i : nums)
        {
            if (map.find(i) != map.end())
            {
                map[i]++;
            }
            else
            {
                map[i] = 1;
            }
        }

        int max = map.begin()->second;
        int res = map.begin()->first;
        for (auto i = map.begin(); i != map.end(); i++)
        {
            if (i->second > max)
            {
                max = i->second;
                res = i->first;
            }
        }

        return res;
    }

    /* 优秀
    public int majorityElement(int[] num) {

        int major=num[0], count = 1;
        for(int i=1; i<num.length;i++){
            if(count==0){
                count++;
                major=num[i];
            }else if(major==num[i]){
                count++;
            }else count--;
            
        }
        return major;
    }
    */
};
