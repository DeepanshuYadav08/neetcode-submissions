class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
           vector<int> prefix;
           vector<int> suffix(n);
           vector<int> ans(n);
           int prefix1 = 1;
           for(int i = 0; i < n;i++){
                  prefix.push_back(prefix1);
                  prefix1 *= nums[i];
              }
           int suffix1 = 1;
           for(int i = nums.size()-1; i >= 0;i--){
                  suffix[i] = suffix1;
                  suffix1 *= nums[i];
           }

           for(int i = 0; i < n;i++){
               int x = prefix[i] * suffix[i];
               ans[i] = x;
           }
           return ans;
    }
};
