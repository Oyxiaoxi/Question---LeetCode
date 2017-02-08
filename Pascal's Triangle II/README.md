# Pascal's Triangle II

## Question Description
Given an index k, return the kth row of the Pascal's triangle.

For example, given k = 3,
Return [1,3,3,1].

## 解题思路
```C++
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v;
        if(rowIndex < 0) retrn v;
        for(int i = 0; i <= rowIndex; ++i){
            v.push_back(0);
        }
        for(int j = 0; j <= rowIndex; ++j){
            v[rowIndex] = 1;
            for(int k = rowIndex-1; k > 0; --k){
                v[k] = v[k] + v[k-1];
            }
            v[0] = 1;
        }
        return v;
    }
};
```

依次计算每一行的值，把它们存在同一个数组里。