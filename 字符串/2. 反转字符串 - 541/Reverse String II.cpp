/*
    23/03/28
    https://leetcode.cn/problems/reverse-string-ii/
 */

#include <iostream>
#include <string>

using namespace std;

/*
    solution: 双指针
    result: ✅
    TC: O(n)  n(k+1)/2k
    SC: O(1)
 */

string reverseStr(string s, int k) {

    for (int leftPointer = 0; leftPointer < s.size(); leftPointer += 2 * k) {
        if (leftPointer + k < s.size()) {
            reverse(s.begin() + leftPointer, s.begin() + leftPointer + k);
        } else {
            reverse(s.begin() + leftPointer, s.end());
        }
    }

    return s;
        
}