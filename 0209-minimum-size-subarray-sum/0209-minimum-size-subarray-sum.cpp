class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0,high=0,sum=0;
        int res=INT_MAX;
        while(high<nums.size()){
            sum=sum+nums[high];
            while(sum>=target){
                int len=high-low+1;
                res=min(len,res);
                sum-=nums[low];
                low++;
            }
            high++;
        }
        return res == INT_MAX ? 0 : res;
    }
};