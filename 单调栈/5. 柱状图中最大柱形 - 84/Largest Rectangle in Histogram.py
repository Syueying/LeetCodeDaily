# 23/03/27
# https://leetcode.cn/problems/largest-rectangle-in-histogram/submissions/

from collections import List

# 栈
# ✅

def largestRectangleArea(self, heights: List[int]) -> int:

    heights = [0] + heights
    heights = heights +  [0]
    st = [0]
    result = 0
    lengthOfHeight = len(heights)

    for i in range(1, lengthOfHeight):
        while heights[i] < heights[st[-1]]:
            mid = st.pop()
            w = i - st[-1] - 1
            h = heights[mid]
            result = max(result, w * h)
        st.append(i)
    
    return result