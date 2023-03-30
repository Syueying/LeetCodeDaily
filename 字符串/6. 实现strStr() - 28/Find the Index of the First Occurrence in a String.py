
# 23/03/29
# https://leetcode.cn/problems/find-the-index-of-the-first-occurrence-in-a-string/

# 讲解视频：https://www.bilibili.com/video/BV1AY4y157yL/?spm_id_from=333.337.search-card.all.click&vd_source=7e6e2d618beb86d965f4d817126fc72f

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:

        def getNextList(pattern: list()) -> list:

            nxt = [0]
            lengthOfPrefix = 0
            pointer = 1

            while pointer < len(pattern):
                if pattern[pointer] == pattern[lengthOfPrefix]:
                    lengthOfPrefix += 1
                    nxt.append(lengthOfPrefix)
                    pointer += 1
                elif lengthOfPrefix == 0:
                    nxt.append(0)
                    pointer += 1
                else:
                    lengthOfPrefix = nxt[lengthOfPrefix - 1]
            return nxt
        
        nxt = getNextList(needle)
        motherPointer, childPointer = 0, 0
        res = -1

        while motherPointer < len(haystack):
            if haystack[motherPointer] == needle[childPointer]:
                motherPointer += 1
                childPointer += 1
            elif childPointer > 0:
                childPointer = nxt[childPointer - 1]
            else:
                motherPointer += 1
            
            if childPointer == len(needle):
                res = motherPointer - childPointer
                break
        
        return res





