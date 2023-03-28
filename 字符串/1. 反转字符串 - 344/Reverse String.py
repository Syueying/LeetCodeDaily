# 23/03/28
# https://leetcode.cn/problems/reverse-string/submissions/

from collections import List 

# 双指针
# ✅

def reverseString(s: List[str]) -> None:
    """
    Do not return anything, modify s in-place instead.
    """

    leftPointer, rightPointer = 0, len(s) - 1

    while leftPointer < rightPointer:
        s[leftPointer], s[rightPointer] = s[rightPointer], s[leftPointer]
        leftPointer += 1
        rightPointer -= 1