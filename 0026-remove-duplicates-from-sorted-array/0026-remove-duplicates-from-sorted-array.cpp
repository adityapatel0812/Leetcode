class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int fix=0;
        int move=1;
        int unique=1;
        int n=nums.size();
        while(move<n){
            if(nums[move]==nums[move-1]){
                move++;
                continue;
            }
            else{
                nums[fix+1]=nums[move];
                fix++;
                move++;
                unique++;
            }
        }
        return unique;
    }
};