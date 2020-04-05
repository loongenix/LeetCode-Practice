/*
 * [155] Min Stack
 *
 * https://leetcode-cn.com/problems/min-stack/description/
 *
 * algorithms
 * Easy (44.91%)
 * Total Accepted:    7.4K
 * Total Submissions: 16.6K
 * Testcase Example:  '["MinStack","push","push","push","getMin","pop","top","getMin"]\n[[],[-2],[0],[-3],[],[],[],[]]'
 *
 * 设计一个支持 push，pop，top 操作，并能在常数时间内检索到最小元素的栈。
 * 
 * 
 * push(x) -- 将元素 x 推入栈中。
 * pop() -- 删除栈顶的元素。
 * top() -- 获取栈顶元素。
 * getMin() -- 检索栈中的最小元素。
 * 
 * 
 * 示例:
 * 
 * MinStack minStack = new MinStack();
 * minStack.push(-2);
 * minStack.push(0);
 * minStack.push(-3);
 * minStack.getMin();   --> 返回 -3.
 * minStack.pop();
 * minStack.top();      --> 返回 0.
 * minStack.getMin();   --> 返回 -2.
 * 
 * 
 */
#include <vector>
class MinStack
{
  public:
    std::vector<int> content;
    int min = INT_MAX;
    /** initialize your data structure here. */
    MinStack()
    {
    }

    void push(int x)
    {
        if(content.empty()){
            min=x;
        }
        if (x < min)
        {
            min = x;
        }
        content.push_back(x);
    }

    void pop()
    {
        if (top() == min)
        {
            min = content[0];
            for (size_t i = 1; i < content.size()-1; i++)
            {
                if (content[i] < min)
                {
                    min = content[i];
                }
            }
        }
       
        content.pop_back();
    }

    int top()
    {
        if (content.size() > 0)
        {
            return content.back();
        }
    }

    int getMin()
    {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
