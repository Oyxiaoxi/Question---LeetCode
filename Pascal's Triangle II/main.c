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