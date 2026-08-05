class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=0,area=0,left=0;
        int right=height.size()-1;
        while(left<right){
            area=(right-left)*min(height[left],height[right]);
            if(area>max){
                max=area;
            }
            if(height[right]>height[left]){
                left++;
            }
            else{
                right--;
            }
        
        }
        return max;
    }
};