class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n =nums.size();
double s(0),ans =(0);
   for(int i = 0 ; i < k ; i++){
    s +=nums[i];
   }
   ans =s;
    for(int i = k ; i < n ; i++){
    s +=nums[i] - nums[i - k];
            ans = max(ans,s); 
   } 

   return ans/k;
    }
};