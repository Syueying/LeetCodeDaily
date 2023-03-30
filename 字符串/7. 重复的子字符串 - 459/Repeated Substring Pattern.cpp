/*
    23/03/29
    https://leetcode.cn/problems/repeated-substring-pattern/
 */

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    /*
        solution: KMP
        result: ✅
        TC: O(n)
        SC: O(1)
    */
    bool repeatedSubstringPattern(string s) {

        int next[s.size()];
        next[0] = 0;
        int pointer = 1;
        int lenOfPrefix = 0;

        while (pointer < s.size()) {
            if (s[pointer] == s[lenOfPrefix]) {
                lenOfPrefix += 1;
                next[pointer++] = lenOfPrefix;
            } else if (lenOfPrefix != 0) {
                lenOfPrefix = next[lenOfPrefix - 1];
            } else {
                next[pointer++] = 0;
            }
        }

        return lenOfPrefix != 0 && lenOfPrefix % (s.size() - lenOfPrefix) == 0 ? true : false ;
    }

    /*
        solution: 枚举
        result: ✅
        TC: O(n ^ 2)
        SC: O(1)
    */
    bool repeatedSubstringPattern1(string s) {

        int lenOfS = s.size();
        for (int i = 1; i < lenOfS; i++) {
            if (lenOfS % i == 0) {
                bool match = true;
                for (int j = i; j < lenOfS; j++) {
                    if (s[j] != s[j - i]) {
                        match = false;
                        break;
                    }
                }
                if (match) {
                    return true;
                }
            }
        }
        return false;
    }
};