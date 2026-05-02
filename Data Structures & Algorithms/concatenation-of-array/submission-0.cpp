class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> sol;

        for (int i=0; i<nums.size(); i++){
            sol.push_back(nums[i]);

        }

         for (int i=0; i<nums.size(); i++){
            sol.push_back(nums[i]);
            
        }
        return sol;
        
    }
};