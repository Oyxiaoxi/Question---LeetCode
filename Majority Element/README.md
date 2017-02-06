# 2017/02/06 Random - Majority Element

## Question Description

Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

Credits:
Special thanks to @ts for adding this problem and creating all test cases.

Subscribe to see which companies asked this question.

## 题解思路：
随机挑选一个元素，检查是否是多数元素。时间复杂度：Average：O(n)。期望查找次数 <2



```C++
class Solution {
public:
int majorityElement(vector<int> &num) {

        int count = 0;
         
        for(;;) {
             if(num.size() == 1)
                 return num[0];
             else{
                 int i = rand() % (num.size() - 1);
                for(int j = 0; j < num.size(); j++) {
                    if(num[j] == num[i])
                         count++;
                 }
                 if(count > (num.size() / 2))
                     return num[i];
                else{
                     count = 0;
                     continue;
                 }
             }
         }
     }
};
```
