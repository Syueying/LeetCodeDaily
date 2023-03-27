/*
    23/03/27
    https://leetcode.cn/problems/largest-rectangle-in-histogram/
 */

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

/*
    solution: 栈
    result: ✅
    TC: O(n)
    SC: O(n)
 */

int largestRectangleArea(vector<int>& heights) {
    
    heights.insert(heights.begin(), 0);
    heights.push_back(0);
    stack<int> st;
    st.push(0);
    int result = 0;
    int lengthOfHeights = heights.size();

    for (int i = 1; i < lengthOfHeights; i++) {
        while (heights[i] < heights[st.top()]) {
            int mid_height = st.top();
            st.pop();
            int w = i - st.top() - 1;
            int h = heights[mid_height];
            result = max(result, w*h);
        }
        st.push(i);
    }

    return result;
}