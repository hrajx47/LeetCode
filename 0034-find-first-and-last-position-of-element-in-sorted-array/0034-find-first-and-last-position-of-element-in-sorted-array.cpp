class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2);
        int start = 0, end = nums.size()-1, first = -1;
        while(start<=end)
        {
            int med = start + (end-start)/2;
            if(nums[med]==target)
            {
                first = med;
                end = med-1;
            }
            else if(nums[med]<target)
            {
                start = med+1;
            }
            else
            end = med - 1;
        }
        ans[0] = first;

        start = 0, end = nums.size()-1;
        int last = -1;
        while(start<=end)
        {
            int med = start + (end-start)/2;
            if(nums[med]==target)
            {
                last= med;
                start = med+1;
            }
            else if(nums[med]<target)
            {
                start = med+1;
            }
            else
            end = med - 1;
        }
        ans[1] = last;
        return ans;
    
    }
};