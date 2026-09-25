class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        int i = 0;
        int j = i+1;
        int count = 1;
        if(n == 0){
            return 0;
        }
        int maxCount = 1;
        while(j < n){
            if(nums[j] - nums[i] == 1){
                count++;
            } else if(nums[j] != nums[i]){
                count = 1;
            }
            maxCount = max(maxCount, count);
            i++;
            j++;
        }
            
        return maxCount;
    }
};