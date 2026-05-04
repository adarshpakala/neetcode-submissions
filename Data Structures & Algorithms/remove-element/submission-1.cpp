class Solution {
public:
    int removeElement(vector<int>& nums, int val) {


        vector <int> res;

        for ( int i : nums){
            if (i != val){

                res.push_back(i);
            }
        }
        for (int j =0; j<res.size(); j++){

            nums[j] = res[j];
        }
            return res.size();
            
            
            } 
        
        
    
};