# 23/03/30
# https://leetcode.cn/problems/repeated-substring-pattern/

class Solution:
    #Solution 1
    def repeatedSubstringPattern(self, s: str) -> bool:

        pointer = 1
        nxt = [0]
        lenOfPrefix = 0

        while pointer < len(s) :
            if s[pointer] == s[lenOfPrefix]:
                lenOfPrefix += 1
                nxt.append(lenOfPrefix)
                pointer += 1
            elif lenOfPrefix != 0:
                lenOfPrefix = nxt[lenOfPrefix - 1]
            else:
                nxt.append(0)
                pointer += 1

        return nxt[-1] != 0 and nxt[-1] % (len(s) - nxt[-1]) == 0

    # Solution 2
    def repeatedSubstringPattern1(self, s: str) -> bool:
        n = len(s)
        for i in range(1, n // 2 + 1):
            if n % i == 0:
                if all(s[j] == s[j - i] for j in range(i, n)):
                    return True
        
        return False