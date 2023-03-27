# 23/03/27
# https://leetcode.cn/problems/next-greater-element-ii/

from collections import List 

def nextGreaterElements(nums: List[int]) -> List[int]:

    lengthOfNums = len(nums)
    stack = list()
    result = [-1 for _ in range(lengthOfNums)]

    for i in range(lengthOfNums * 2):
        index = i % lengthOfNums
        while stack and nums[index] > nums[stack[-1]]:
            result[stack[-1]] = nums[index]
            stack.pop()
        stack.append(index)
    
    return result