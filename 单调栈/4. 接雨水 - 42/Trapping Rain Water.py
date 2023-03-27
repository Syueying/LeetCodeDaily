# 23/03/27
# https://leetcode.cn/problems/trapping-rain-water/

from collections import List

# 栈
# ✅

def trap3(height: List[int]) -> int:

    lengthOfHeight = len(height)
    sumRain = 0
    stack = list()

    for i in range(lengthOfHeight):
        while stack and height[i] > height[stack[-1]]:
            mid_height = stack.pop()
            if stack:
                h = min(height[stack[-1]], height[i]) - height[mid_height]
                w = i - stack[-1] - 1
                sumRain += w * h 
        stack.append(i)
    return sumRain

# 双指针
# ✅

def trap2(height: List[int]) -> int: 

    lengthOfHeight = len(height)
    sumRain = 0
    leftMaxHeight, rightMaxHeight = [0] * lengthOfHeight, [0] * lengthOfHeight
    leftMaxHeight[0], rightMaxHeight[lengthOfHeight - 1] = height[0], height[lengthOfHeight -1]

    for i in range(1, lengthOfHeight):
        leftMaxHeight[i] = max(height[i], leftMaxHeight[i-1])
    for i in range(lengthOfHeight - 2, -1, -1):
        rightMaxHeight[i] = max(height[i], rightMaxHeight[i+1])
    for i in range(lengthOfHeight):
        if i == 0 or i == lengthOfHeight - 1: continue
        tmpSum = min(leftMaxHeight[i], rightMaxHeight[i]) - height[i]
        sumRain = tmpSum +  sumRain if tmpSum > 0 else sumRain
    
    return sumRain

    

# 暴力
# ❌ 超时，用例：https://leetcode.cn/submissions/detail/418149515/testcase/

def trap1(height: List[int]) -> int: 

    lengghtOfHeight = len(height)
    sumRain = 0

    for i in range(lengghtOfHeight):

        if i == 0 or i == lengghtOfHeight - 1: continue

        lh, rh = max(height[:i]), max(height[(i+1):])
        tmpSum = min(lh, rh) - height[i]
        sumRain = sumRain + tmpSum if tmpSum > 0 else sumRain
    
    return sumRain
        