/*
    23/03/28
    https://leetcode.cn/problems/zuo-xuan-zhuan-zi-fu-chuan-lcof/
 */

#include <iostream>
#include <string>

using namespace std;

/*
    solution: 
    result: ✅
    SC: O(1)
 */


class Solution {
public:
    string reverseLeftWords(string s, int n) {

        return s.substr(n, s.size() - n) + s.substr(0, n);

    }
};