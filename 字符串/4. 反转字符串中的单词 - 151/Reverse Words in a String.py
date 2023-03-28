# 23/03/28
# https://leetcode.cn/problems/reverse-words-in-a-string/

def reverseWords(s: str) -> str:
    tmpList = [i for i in s.split(" ") if len(i) > 0]
    return " ".join(tmpList[::-1])