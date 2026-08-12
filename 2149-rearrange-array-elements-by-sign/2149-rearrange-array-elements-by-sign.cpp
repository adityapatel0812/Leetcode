class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0,neg=1,n=nums.size(),i=0;
        vector<int> arr(n);
        while(i<n){
            if(nums[i]>0){
                arr[pos]=nums[i];
                pos+=2;
            }
            else{
                arr[neg]=nums[i];
                neg+=2;
            }
            i++;
        }
        return arr;
    }
};