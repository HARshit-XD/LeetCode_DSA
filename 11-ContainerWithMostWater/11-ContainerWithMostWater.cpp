// Last updated: 3/27/2025, 10:21:07 AM
class Solution {
public:
    int maxArea(vector<int>& vec) {
        int left, right, maxWater =0, currentWater, height;
        left = 0;
        right = vec.size()-1;

        while(left<right){
            height = min(vec.at(left) , vec.at(right));

            currentWater = height*(right-left);
            maxWater = max(maxWater,currentWater);

            if(vec.at(left) < vec.at(right)){
                left++;
            }
            else{
                right--;
            }

        }

        return maxWater;

        
    }
};