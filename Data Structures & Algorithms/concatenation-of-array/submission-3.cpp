class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> new_array;
    

        for(int i =0 ; i<nums.size(); i++){

            new_array.push_back(nums[i]);
        }
        for(int i =0 ; i<nums.size(); i++){

            new_array.push_back(nums[i]);
        }



        return new_array;
    }
};