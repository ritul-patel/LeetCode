class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = nums.size();
        int min_v = nums[0];
        //sort(nums.begin(),nums.end());
        for(int  num : nums){
            if(abs(num)<abs(min_v)){
                min_v = num;
            }
            else if(abs(min_v)==abs(num) && num>min_v){
                min_v = num;
            }
        }
        return min_v;
    }
};