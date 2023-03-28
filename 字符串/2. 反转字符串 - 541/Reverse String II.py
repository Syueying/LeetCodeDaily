# 23/03/28
# https://leetcode.cn/problems/reverse-string-ii/


# 双指针
# ✅

def reverseStr(s: str, k: int) -> str:

    leftPointer = 0

    while leftPointer < len(s):
        rightPointer = leftPointer + k
        s = s[:leftPointer] + s[leftPointer:rightPointer][::-1] + s[rightPointer:]
        leftPointer += 2 * k

    return s