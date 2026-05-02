class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       int x = nums.size();

       vector<int> sol(x * 2);
       for(int i=0; i<x; i++){
        sol[i]=sol[i+x]=nums[i];
       }
       return sol;
        
    }
};