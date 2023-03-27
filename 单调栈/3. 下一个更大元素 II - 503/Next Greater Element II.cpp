/*
    23/03/27
    https://leetcode.cn/problems/next-greater-element-ii/
 */

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

/*
    solution: 栈
    result: ✅
    TC: O(n)
    SC: O(1)
 */

vector<int> nextGreaterElements(vector<int>& nums) {

    int lengthOfNums = nums.size();
    vector<int> result(lengthOfNums, -1);
    stack<int> st;

    for (int i = 0; i < lengthOfNums * 2; i ++) 
    {
        int index = i % lengthOfNums;
        while (!st.empty() && nums[index] > nums[st.top()])
        {
            result[st.top()] = nums[index];
            st.pop();
        }
        st.push(index);
    }

    return result;
}