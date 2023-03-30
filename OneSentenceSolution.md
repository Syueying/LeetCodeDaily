
## One Sentence Solution

- [One Sentence Solution](#one-sentence-solution)
  - [🟢 offer 05. 替换空格](#-offer-05-替换空格)
  - [🟢 offer 58. 左旋转字符串](#-offer-58-左旋转字符串)
  - [🟠 28. 找出字符串中第一个匹配项的下标](#-28-找出字符串中第一个匹配项的下标)
  - [🔴 42. 接雨水](#-42-接雨水)
  - [🔴 84. 柱状图中最大柱形](#-84-柱状图中最大柱形)
  - [🟠 151. 反转字符串中的单词](#-151-反转字符串中的单词)
  - [🟢 344. 反转字符串](#-344-反转字符串)
  - [🟢 459. 重复的子字符串](#-459-重复的子字符串)
  - [🟢 496. 下一个更大元素 I](#-496-下一个更大元素-i)
  - [🟠 503. 下一个更大元素 II](#-503-下一个更大元素-ii)
  - [🟢 541. 反转字符串 II](#-541-反转字符串-ii)
  - [🟠 739. 每日温度](#-739-每日温度)

### [🟢 offer 05. 替换空格](https://leetcode.cn/problems/ti-huan-kong-ge-lcof/)

Descrption: 逆向遍历字符串，原地添加目标字符串（%20）。

---

### [🟢 offer 58. 左旋转字符串](https://leetcode.cn/problems/zuo-xuan-zhuan-zi-fu-chuan-lcof/)

Descrption: 没得感情，全是技巧。

---

### [🟠 28. 找出字符串中第一个匹配项的下标](https://leetcode.cn/problems/find-the-index-of-the-first-occurrence-in-a-string/)

Solution: KMP

Description: 根据pattern构造next数组，再遍历string。

---

### [🔴 42. 接雨水](https://leetcode.cn/problems/trapping-rain-water/)

Solution: monotonic stack, double pointer, brute force

Descrption for monotonic stack: 寻找当前柱子右边最大元素以及左边最大元素。

---

### [🔴 84. 柱状图中最大柱形](https://leetcode.cn/problems/largest-rectangle-in-histogram/)

Solution: monotonic stack, double pointer, brute force

Description for monotonic stack: 寻找当前图形右边最小元素以及左边最小元素。

---

### [🟠 151. 反转字符串中的单词](https://leetcode.cn/problems/reverse-words-in-a-string/)


Description: 删除多余空格，反转字符串，反转单词。

---

### [🟢 344. 反转字符串](https://leetcode.cn/problems/reverse-string/submissions/)

Solution: double pointer

Descrption: 双指针向中间遍历（可以使用位运算中的异或）。

---

### [🟢 459. 重复的子字符串](https://leetcode.cn/problems/repeated-substring-pattern/)

Solution: enumerate，KMP

---

### [🟢 496. 下一个更大元素 I](https://leetcode.cn/problems/next-greater-element-i/)

Solution: monotonic stack

Descrption: 
    
1. 遍历nums1，找到每个数值在nums2中对应的位置，按照 [739. 每日温度](#739-每日温度) 的方法解答。
2. 遍历nums2，按照 [739. 每日温度](#739-每日温度) 的方法解答，若当前数值存在nums1种中，进行记

---

### [🟠 503. 下一个更大元素 II](https://leetcode.cn/problems/next-greater-element-ii/)

Solution: monotonic stack

Descrption: 通过将数组长度乘2，遍历两遍数组，注意下标取余。

---

### [🟢 541. 反转字符串 II](https://leetcode.cn/problems/reverse-string-ii/)

Solution: double pointer

---

### [🟠 739. 每日温度](https://leetcode.cn/problems/daily-temperatures/)

Solution: monotonic stack

Description: 存储数组下标，遇到大于栈顶下标所表示数值，则出栈。


