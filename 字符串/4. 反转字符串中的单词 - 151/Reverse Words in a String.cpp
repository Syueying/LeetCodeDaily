/*
    23/03/28
    https://leetcode.cn/problems/reverse-words-in-a-string/
 */

#include <iostream>
#include <string>

using namespace std;

/*
    solution: 
    result: ✅
    TC: O(n)
    SC: O(1)
 */

class Solution {
public:

    void removeExtraSpace(string& s) {
        int slow = 0;
        for (int i = 0; i < s.size(); i ++) {
            if (s[i] != ' ') {
                if (slow != 0) { s[slow++] = ' '; }
                while (i < s.size() && s[i] != ' ') {
                    s[slow++] = s[i++];
                }
            }
        }
        s.resize(slow);
    }

    void reverse(string& s, int leftPointer, int rightPointer) {
        while (leftPointer < rightPointer) {
            swap(s[leftPointer++], s[rightPointer--]);
        }
    }

    string reverseWords(string s) {

        removeExtraSpace(s);
        reverse(s, 0, s.size() - 1);

        int start = 0;
        for (int i = 0; i < s.size(); i ++) {
            if (i == s.size() || s[i] == ' ') {
                reverse(s, start, i - 1);
                start = i + 1;
            }
        }

        return s;

    }
};
