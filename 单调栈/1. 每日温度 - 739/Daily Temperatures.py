# 23/03/24
# https://leetcode.cn/problems/daily-temperatures/

from collections import List

def dailyTemperatures(temperatures: List[int]) -> List[int]:

    length = len(temperatures)
    result = [0] * length
    stack = list()

    for cur in range(length):
        while stack and temperatures[cur] > temperatures[stack[-1]]:
            tempIndex = stack.pop()
            result[tempIndex] = cur - tempIndex
        stack.append(cur)
    
    return result

dailyTemperatures([73,74,75,71,69,72,76,73]) # [1,1,4,2,1,1,0,0]
dailyTemperatures([30,40,50,60]) # [1,1,1,0]
dailyTemperatures([30,60,90]) # [1,1,0]