class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()){
            return 0;
        }

        int x = height.size();
        int result = 0;

        for (int i =0; i<x; i++){
            int leftmax = height[i];
            int rightmax = height[i];

        

        for (int j =0; j<i; j++){
            leftmax = max(leftmax, height[j]);
        }
        for (int j= i+1; j<x; j++){
            rightmax = max(rightmax, height[j]);
        }

        result+= min(leftmax, rightmax)- height[i];
        
        }
        return result;
    }
};
