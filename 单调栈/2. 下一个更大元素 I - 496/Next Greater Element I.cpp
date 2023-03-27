/*
    23/03/24
    https://leetcode.cn/problems/next-greater-element-i/
 */

#include <iostream>
#include <vector>

using namespace std;

/*
    solution: 暴力
    result: ✅
    TC: O(n * m)
    SC: O(1)
 */

vector<int> nextGreaterElement1(vector<int>& num1, vector<int>& num2) {

    int lengthOfNum1 = num1.size();
    int lengthOfNum2 = num2.size();
    vector<int> result(lengthOfNum1, -1);

    for (int i = 0; i < lengthOfNum1; i++) {
        int n1 = num1[i];
        vector<int>::iterator tmpIndexInNum2 = find(num2.begin(), num2.end(), n1);
        if (tmpIndexInNum2 != num2.end()) {
            for (int j = distance(num2.begin(), tmpIndexInNum2) + 1; j < lengthOfNum2; j++) {
                if (num2[j] > n1) {
                    result[i] = num2[j];
                    break;
                }
            }
        }
    }

    return result;
}