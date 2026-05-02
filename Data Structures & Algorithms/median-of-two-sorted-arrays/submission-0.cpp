class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int length_1= nums1.size();
        int length_2= nums2.size();

        vector <int> merged(length_1 + length_2);
        
        copy(nums1.begin(), nums1.end(), merged.begin());  
        copy(nums2.begin(), nums2.end(), merged.begin() + length_1);

        sort(merged.begin(), merged.end());

        int total_length = merged.size();
        if (total_length % 2 == 0) {
            return (merged[total_length / 2-1]+ merged[total_length/2]) / 2.0 ;
        }
        else{
            return merged[total_length /2];
        }



    }
};
