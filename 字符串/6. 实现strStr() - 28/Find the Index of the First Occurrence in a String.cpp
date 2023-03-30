/*
    23/03/29
    https://leetcode.cn/problems/find-the-index-of-the-first-occurrence-in-a-string/
 */

#include <iostream>
#include <string>

using namespace std;

/*
    solution: KMP
    result: ✅
    n: length of pattern
    m: length of string
    TC: O(n + m)
    SC: O(n)
 */

class Solution {
public:

    void buildNext(int* next, const string& s) {
        int lengthOfPrefix = 0;
        int pointer = 1;
        next[0] = 0;

        while (pointer < s.size()) {
            if (s[pointer] == s[lengthOfPrefix]) {
                lengthOfPrefix += 1;
                next[pointer++] = lengthOfPrefix;
            } else if (lengthOfPrefix == 0) {
                next[pointer++] = 0;
            } else {
                lengthOfPrefix = next[lengthOfPrefix - 1];
            }
        }
    }

    int strStr(string haystack, string needle) {
        if (needle.size() == 0) {return 0;}

        int next[needle.size()];
        buildNext(next, needle);
        int motherPointer = 0;
        int childPointer = 0;
        while (motherPointer < haystack.size()) {
            if (haystack[motherPointer] == needle[childPointer]) {
                motherPointer += 1;
                childPointer += 1;
            } else if (childPointer > 0){
                childPointer = next[childPointer - 1];
            } else {
                motherPointer += 1;
            }

            if (childPointer == needle.size()) {
                return motherPointer - childPointer;
            }
        }
        return -1;
    }
};