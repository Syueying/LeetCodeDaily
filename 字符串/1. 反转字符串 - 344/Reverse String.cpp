/*
    23/03/28
    https://leetcode.cn/problems/reverse-string/submissions/
 */

#include <iostream>
#include <vector>

using namespace std;

/*
    solution: 双指针
    result: ✅
    TC: O(n/2)
    SC: O(1)
 */

void reverseString(vector<char>& s) {

    // we can't write the same as the example here https://programmercarl.com/0344.%E5%8F%8D%E8%BD%AC%E5%AD%97%E7%AC%A6%E4%B8%B2.html#%E5%85%B6%E4%BB%96%E8%AF%AD%E8%A8%80%E7%89%88%E6%9C%AC:~:text=%E4%B9%9F%E4%BC%9A%E6%9C%89%E6%89%80%E6%94%B6%E8%8E%B7%E3%80%82-,C%2B%2B%E4%BB%A3%E7%A0%81%E5%A6%82%E4%B8%8B%EF%BC%9A,-class%20Solution%20%7B
    // as 'a condition declaration can only declare one variableC/C++(2843)'
    // while (int i = 0, j = s.size() - 1; i < s.size()/2; i++, j--) {
    //     swap(s[i], s[j]);
    // }

    int i = 0;
    int j = s.size() - 1;

    while(i < s.size()/2) {
        swap(s[i], s[j]);
        i += 1;
        j -= 1;

        // 还可以利用异或进行交换
        // s[i] ^= s[j]; // a = a ^ b
        // s[j] ^= s[i]; // b = (a ^ b) ^ b = a
        // s[i] ^= s[j]; // a = (a ^ b) ^ a = b
    }
}