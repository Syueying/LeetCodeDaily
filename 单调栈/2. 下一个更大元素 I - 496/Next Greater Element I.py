#23/3/24
#https://leetcode.cn/problems/next-greater-element-i/

from collections import List 

def nextGreaterElement(nums1: List[int], nums2: List[int]) -> List[int]:

    res = [-1 for _ in range(len(nums1))]
    for i in range(len(nums1)):
        for j in range(nums2.index(nums1[i]), len(nums2)):
            if nums2[j] > nums1[i]:
                res[i] = nums2[j]
                break
    return res

