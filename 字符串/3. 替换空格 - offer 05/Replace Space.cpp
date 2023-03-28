/*
    23/03/28
    https://leetcode.cn/problems/ti-huan-kong-ge-lcof/
 */

#include <iostream>
#include <string>

using namespace std;

/*
    solution: 双指针
    result: ✅
    TC: O(n)
    SC: O(1)
 */

string replaceSpace(string s) {
    
    int count = 0;
    int oldSize = s.size();
    for (int i = 0; i < oldSize; i ++) {
        count = s[i] == ' ' ? count + 1 : count;
    }

    int newSize = oldSize + count * 2;
    s.resize(newSize);
    int oldStrPointer = oldSize - 1;
    int newStrPointer = newSize - 1;
    while (newStrPointer != oldStrPointer)
    {
        if (s[oldStrPointer] != ' ') {
            s[newStrPointer] = s[oldStrPointer];
        } else {
            s[newStrPointer] = '0';
            s[newStrPointer - 1] = '2';
            s[newStrPointer - 2] = '%';
            newStrPointer -= 2;
        }
        newStrPointer -= 1;
        oldStrPointer -= 1;
    }
    
    return s;
}