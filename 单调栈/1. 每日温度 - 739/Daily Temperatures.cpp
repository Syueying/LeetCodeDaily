/*
    23/03/24
    https://leetcode.cn/problems/daily-temperatures/
 */

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

/*
    solution: 栈
    result: ✅
    TC: O(n)
    SC: O(1)
 */

vector<int> dailyTemperatures(vector<int>& temperatures) {
    
    int length = temperatures.size();
    vector<int> result(length, 0);
    stack<int> stk;

    for (int cur = 0; cur < length; cur ++) {
        while (!stk.empty() && temperatures[cur] > temperatures[stk.top()]) {
            auto tempIndex = stk.top();
            stk.pop();
            result[tempIndex] = cur - tempIndex;
        }
        stk.push(cur);
    }

    return result;
}