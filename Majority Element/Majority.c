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