/*
    23/03/27
    https://leetcode.cn/problems/trapping-rain-water/
 */

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

/*
    solution: 栈
    result: ✅
    TC: O(n)
    SC: O(n)
 */
int trap3(vector<int>& height) {

    int lengthOfHeight = height.size();
    int sumRain = 0;
    stack<int> st;

    for (int i = 0; i < lengthOfHeight; i ++) {
        while (!st.empty() && height[i] > height[st.top()]) {
            int mid_height = st.top();
            st.pop();
            if (!st.empty()) {
                int h = min(height[st.top()], height[i]) - height[mid_height];
                int w = i - st.top() - 1;
                sumRain += h * w;
            }
        }
        st.push(i);
    }

    return sumRain;
}

/*
    solution: 双指针
    result: ✅
    TC: O(n)
    SC: O(n)
 */
int trap2(vector<int>& height) {

    int lengthOfHeight = height.size();
    int sumRain = 0;
    vector<int> leftMaxHeight(height.size(), 0);
    vector<int> rightMaxHeight(height.size(), 0);
    leftMaxHeight[0] = height[0];
    rightMaxHeight[lengthOfHeight-1] = height[lengthOfHeight-1];

    // store max height of all elements from the left 
    for (int i = 1; i < lengthOfHeight; i ++) {
        leftMaxHeight[i] = max(height[i], leftMaxHeight[i-1]);
    }
    // store max height of all elements from the left 
    for (int i = lengthOfHeight - 2; i >= 0; i --) {
        rightMaxHeight[i] = max(height[i], rightMaxHeight[i+1]);
    }

    for (int i = 0; i < lengthOfHeight; i ++) {
        if (i == 0 || i == lengthOfHeight - 1) { continue; }

        int tmpSum = min(leftMaxHeight[i], rightMaxHeight[i]) - height[i];
        sumRain = tmpSum > 0 ? sumRain + tmpSum : sumRain;
    }

    return sumRain;

}


/*
    solution: 暴力
    result: ❌ 用例均通过，但超时 
    TC: O(n^2)
    SC: O(1)
 */
int trap1(vector<int>& height) {

    int lengthOfHeight = height.size();
    int sumRain = 0;
    
    for (int i = 0; i < lengthOfHeight; i++)
    {
        if (i == 0 || i == lengthOfHeight - 1){ continue; } 

        auto lh = max_element(height.begin(), height.begin() + i);
        auto rh = max_element(height.begin() + i + 1, height.end());
        int tmpSum = min(*lh, *rh) - height[i];
        sumRain = tmpSum > 0 ? sumRain + tmpSum : sumRain;
    }

    return sumRain;

}