# 23/03/28
# https://leetcode.cn/problems/zuo-xuan-zhuan-zi-fu-chuan-lcof/

class Solution:
    def reverseLeftWords(self, s: str, n: int) -> str:
        
        return s[n:] + s[:n]