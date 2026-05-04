class Solution {
public:
    int majorityElement(vector<int>& nums) {

    //   sort(nums.begin(), nums.end());
    //   return nums[nums.size() /2];  
         
    //      for (int i =0; i<nums.size(); i++){
    //         int count = 0;
    //         for (int j =0; j < nums.size();j++){
    //             if (nums[i] == nums[j]){

    //                 count++;
    //             }
    //         }

    //         if (count > nums.size()/2){
    //             return nums[i];
    //         }
    //      }
    //      return -1;


        unordered_map<int, int> cnt;

        for (int i =0; i<nums.size(); i++){

            cnt[nums[i]]++;

        
        if (cnt[nums[i]] > nums.size()/2){
            return nums[i];
        }
        }

        return -1;
     }
};