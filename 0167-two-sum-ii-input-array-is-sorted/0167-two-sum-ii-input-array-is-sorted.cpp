class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=1;
        int end=numbers.size();
        int sum=0;
        while(start<end){
            sum=numbers[start-1]+numbers[end-1];
            if(sum<target){
                start++;
            }
            else if(sum>target){
                end--;
            }
            else{
                return{start,end};
            }

        }
        return{};
    }  
};