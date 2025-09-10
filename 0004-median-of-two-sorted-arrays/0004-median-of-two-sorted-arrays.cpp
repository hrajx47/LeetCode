class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> array;
        for(int i=0; i<nums1.size(); i++){
            array.push_back(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            array.push_back(nums2[i]);
        }

        sort(array.begin(), array.end());

        int ans = array.size();
        double median ;
        if(ans%2==1){
            median = array[ans/2];
        }
        else{
            median = (array[ans/2-1]+array[ans/2])/2.0;
        }
        
        return median;
    }
};