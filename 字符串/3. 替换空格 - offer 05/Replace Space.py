# 23/03/28
# https://leetcode.cn/problems/ti-huan-kong-ge-lcof/


def replaceSpace(s: str) -> str:

    # Solution 1
    # return "%20".joint(s.split(" "))

    # Solution 2
    lengthOfS = len(s)
    for index, value in enumerate(s[::-1]):
        if value == " ":
            s = s[: lengthOfS - 1 - index] + "%20" + s[lengthOfS - index:]
    
    return s
