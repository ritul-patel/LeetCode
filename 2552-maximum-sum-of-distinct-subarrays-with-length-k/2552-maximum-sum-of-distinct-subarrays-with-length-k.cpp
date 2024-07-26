class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
       int n = nums.size();
        if (n < k) return 0;
       long long max_sum(0),win_sum(0);
        unordered_map<int,int> chk;
       for(int i = 0 ; i < k ; i++){
        max_sum += nums[i];
        chk[nums[i]]++;
       }
    if(chk.size()==k){
        win_sum = max_sum;
    }
       

       for(int i = k ; i < n ; i++){
            chk[nums[i]]++;
            max_sum += nums[i];

            chk[nums[i-k]]--;

            if(chk[nums[i-k]]==0){
                chk.erase(nums[i-k]);
            } 

            max_sum -= nums[i-k];

            if(chk.size()==k){
                win_sum = max(win_sum,max_sum);
            }
       } 
       return win_sum;
    }
};